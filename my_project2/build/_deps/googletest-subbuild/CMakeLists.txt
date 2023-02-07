# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(googletest-populate NONE)

include(ExternalProject)
ExternalProject_Add(googletest-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/google/googletest/archive/d9251171f5a42eaf993395e7ef127546af5814b0.zip"
                    SOURCE_DIR          "/home/reynald/test/googletest/googlemock/my_project2/build/_deps/googletest-src"
                    BINARY_DIR          "/home/reynald/test/googletest/googlemock/my_project2/build/_deps/googletest-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
