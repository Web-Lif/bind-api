cmake_minimum_required(VERSION 3.0.0)
project(bind-api VERSION 0.1.0)

include(CTest)
enable_testing()



find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

find_library(MHTD microhttpd "third_party/libmicrohttpd")

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(bind-api main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})