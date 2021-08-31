
project(QuickSortProject)

include(conanbuildinfo.cmake)
conan_basic_setup()

enable_testing()
find_package (GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_library( 
    QuickSort STATIC
    QuickSort.cpp
    QuickSort.hpp
) 

add_executable(
    QuickSort.Test
    QuickSort.hpp
    QuickSort.test.cpp
)
target_link_libraries(QuickSort.Test QuickSort )
target_link_libraries(QuickSort.Test GTest::GTest GTest::Main)

