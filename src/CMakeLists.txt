# Créer un dossier pour la compilation
# $ mkdir /path/to/build
# Lancer
# $ cmake /path/to/source -DCMAKE_BUILD_TYPE=Debug
# dans le dossier build pour créer l'environnemtn de construction, puis
# $ make
# pour la compilation
# $ ./facile <source>.facile
# $ ilasm source.il
# $ chmod 755 <source>.exe
# $ ./<source>.exe

cmake_minimum_required(VERSION 3.0)

project(facile VERSION 0.3.1 LANGUAGES C)

find_package(FLEX)
flex_target(
	FACILE_SCANNER
	facile.lex
	"${CMAKE_CURRENT_BINARY_DIR}/facile.lex.c"
)

find_package(BISON)
if(CMAKE_BUILD_TYPE STREQUAL Debug)
	bison_target(
		FACILE_PARSER
		facile.y
		"${CMAKE_CURRENT_BINARY_DIR}/facile.y.c"
		COMPILE_FLAGS "-g"
		VERBOSE
	)
else()
	bison_target(
		FACILE_PARSER
		facile.y
		"${CMAKE_CURRENT_BINARY_DIR}/facile.y.c"
	)
endif()

add_executable(facile ${FLEX_FACILE_SCANNER_OUTPUTS} ${BISON_FACILE_PARSER_OUTPUTS})

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB2 REQUIRED glib-2.0)
include_directories(${GLIB2_INCLUDE_DIRS})
link_directories (${GLIB2_LIBRARY_DIRS})
add_definitions (${GLIB2_CFLAGS_OTHER})
target_link_libraries (facile ${GLIB2_LIBRARIES})

if(CMAKE_BUILD_TYPE STREQUAL Debug)
	add_custom_command(
		TARGET facile POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_CURRENT_SOURCE_DIR}/facile.lex" "${CMAKE_CURRENT_BINARY_DIR}"
		COMMENT "Copying facile.lex"
	)
	add_custom_command(
		TARGET facile POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_CURRENT_SOURCE_DIR}/facile.y" "${CMAKE_CURRENT_BINARY_DIR}"
		COMMENT "Copying facile.y"
	)
	find_program(DOT dot)
	if(DOT)
		add_custom_command(
			TARGET facile POST_BUILD
			COMMAND ${DOT} -Tsvg:cairo facile.y.dot -o facile.y.svg
			COMMENT "Generating facile.y.svg"
		)
	endif()
endif()

set_directory_properties(PROPERTIE
	ADDITIONAL_MAKE_CLEAN_FILES "facile.y.output;facile.y.dot;facile.y.svg"
)

set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES "~$;${CPACK_SOURCE_IGNORE_FILES}")
set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})
include(CPack)

