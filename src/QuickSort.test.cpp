#include <gtest/gtest.h>
#include <vector>
#include "QuickSort.hpp"

using namespace std;

TEST(Sorting, BubbleSort)
{
    std::vector<double> vector {5, 7, 3, 4, 5, 1, 9, 2, 6, 7};
    Sorting::BubbleSort(vector);
    ASSERT_TRUE(std::is_sorted(vector.begin(), vector.end()));
}

TEST(Sorting, Swap)
{
    std::vector<double> vector {5, 7, 3, 4, 5, 1, 9, 2, 6, 7};
    Sorting::Swap(vector, 2, 4);
    ASSERT_TRUE(vector[2] == 5);
    ASSERT_TRUE(vector[4] == 3);
}


