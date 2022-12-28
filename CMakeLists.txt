cmake_minimum_required(VERSION 3.1.0)

project(FirstWX VERSION 1.0.0)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

# Doxygen for generate documentation. This is optional
find_package(Doxygen)

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

set(SOURCES main.cpp main.h)
if (WIN32)
    set(SOURCES ${SOURCES} versioninfo.rc)
endif()

add_executable(FirstWX WIN32 main.cpp main.h versioninfo.rc)

target_link_libraries(FirstWX ${wxWidgets_LIBRARIES})
