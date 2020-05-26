cmake_minimum_required (VERSION 3.5)

project (app)

if(USE_STRING_FUNC)
	add_definitions(-DUSE_STRING_FUNC)
endif()

add_library(make_double ${PROJECT_SOURCE_DIR}/make_double)
add_library(print_string SHARED ${PROJECT_SOURCE_DIR}/print_string.cpp)
add_executable(app ${PROJECT_SOURCE_DIR}/main.cpp)

target_link_libraries(app make_double print_string)

