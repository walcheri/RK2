cmake_minimum_required(VERSION 3.10)
project(hamburger_builder)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(hamburger_lib STATIC
    src/hamburger.cpp
    src/beef_hamburger_builder.cpp
    src/pork_hamburger_builder.cpp
    src/hamburger_house.cpp
)

add_executable(hamburger_builder src/main.cpp)
target_link_libraries(hamburger_builder hamburger_lib)

option(BUILD_TESTS "Build tests" ON)

if(BUILD_TESTS)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
    )
    FetchContent_MakeAvailable(googletest)

    enable_testing()

    add_executable(hamburger_test tests/hamburger_test.cpp src/hamburger.cpp)
    target_link_libraries(hamburger_test hamburger_lib GTest::gtest_main)
    add_test(NAME hamburger_test COMMAND hamburger_test)

    add_executable(beef_builder_test tests/beef_builder_test.cpp 
        src/beef_hamburger_builder.cpp src/hamburger.cpp)
    target_link_libraries(beef_builder_test hamburger_lib GTest::gtest_main)
    add_test(NAME beef_builder_test COMMAND beef_builder_test)

    add_executable(pork_builder_test tests/pork_builder_test.cpp 
        src/pork_hamburger_builder.cpp src/hamburger.cpp)
    target_link_libraries(pork_builder_test hamburger_lib GTest::gtest_main)
    add_test(NAME pork_builder_test COMMAND pork_builder_test)

    add_executable(house_test tests/hamburger_house_test.cpp 
        src/hamburger_house.cpp src/beef_hamburger_builder.cpp src/hamburger.cpp)
    target_link_libraries(house_test hamburger_lib GTest::gtest_main)
    add_test(NAME house_test COMMAND house_test)
endif()

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "walcheri")
set(CPACK_PACKAGE_VERSION "1.0.0")
include(CPack)
