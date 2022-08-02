cmake_minimum_required(VERSION 3.1.0)

project(UTerm VERSION 1.0.0)

set(wxWidgets_DIR "F:/apps/wxWidgets/lib/cmake/wxWidgets")
set(wxWidgets_CONFIGURATION mswu)
set(wxWidgets_EXCLUDE_COMMON_LIBRARIES TRUE)

find_package(wxWidgets REQUIRED core base CONFIG)
include(UsewxWidgets)

add_executable(UTerm WIN32 main.cpp main.h versioninfo.rc)

target_link_libraries(UTerm ${wxWidgets_LIBRARIES})
