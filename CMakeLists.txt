cmake_minimum_required(VERSION 3.1.0)

project(FirstWX VERSION 1.0.0)

set(wxWidgets_DIR "F:/apps/wxWidgets/lib/cmake/wxWidgets")
set(wxWidgets_CONFIGURATION mswu)
set(wxWidgets_EXCLUDE_COMMON_LIBRARIES TRUE)

find_package(wxWidgets REQUIRED core base CONFIG)
include(UsewxWidgets)

find_package(Doxygen REQUIRED)

set(DOXYGEN_PROJECT_NAME "FirstWX")
set(DOXYGEN_PROJECT_NUMBER 1.0.0)
set(DOXYGEN_PROJECT_BRIEF "A simple wxWidgets C++ hello world GUI project.")

doxygen_add_docs(
    doxygen
    ${PROJECT_SOURCE_DIR}
    COMMENT "Generate HTML docs"
)

add_executable(FirstWX WIN32 main.cpp main.h versioninfo.rc)

target_link_libraries(FirstWX ${wxWidgets_LIBRARIES})
