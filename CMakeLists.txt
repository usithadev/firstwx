cmake_minimum_required(VERSION 3.1.0)

project(FirstWX VERSION 1.0.0)

# This wxWidgets_DIR variable should be changed to where wxWidgets installed in your machine.
# For example if wxWidgets installed in C:/wxWidgets you have to set wxWidgets variable to
# C:/wxWidgets/lib/cmake/wxWidgets
# To do this you should have built wxWidgets from source using CMake
# For wxWidgets installation instruction see https://docs.wxwidgets.org/trunk/overview_cmake.html
set(wxWidgets_DIR "F:/apps/wxWidgets/lib/cmake/wxWidgets")

set(wxWidgets_CONFIGURATION mswu) # mswd if release, mswd if debug

set(wxWidgets_EXCLUDE_COMMON_LIBRARIES TRUE)

find_package(wxWidgets REQUIRED core base CONFIG)
include(UsewxWidgets)

# Doxygen for generate documentation. This is optional
find_package(Doxygen REQUIRED)

if(DOXYGEN_FOUND)
    set(DOXYGEN_PROJECT_NAME "FirstWX")
    set(DOXYGEN_PROJECT_NUMBER 1.0.0)
    set(DOXYGEN_PROJECT_BRIEF "A simple wxWidgets C++ hello world GUI project.")

    doxygen_add_docs(
        doxygen
        ${PROJECT_SOURCE_DIR}
        COMMENT "Generate HTML docs"
    )

    message("Found doxygen for generate docs")
else()
    message("Didn't found Doxygen.")
endif()

add_executable(FirstWX WIN32 main.cpp main.h versioninfo.rc)

target_link_libraries(FirstWX ${wxWidgets_LIBRARIES})
