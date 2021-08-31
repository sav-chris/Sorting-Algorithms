
#include <iostream>
#include <vector>
#include "QuickSort.hpp"

using namespace std;

int Sorting::BubbleSort(std::vector<double> & list)
{
    bool swapped { true };
    size_t size = list.size();
    double temp { 0 };
    while (swapped)
    {
        swapped = false ;

        for (int i = 0; i < size - 1; i++)
        {
            if(list[i] > list[i+1])
            {
                //swap
                temp =  list[i+1];
                list[i+1] = list[i]; 
                list[i] = temp;
                swapped = true;
            }
        }
    }
    return 1;
}

void Sorting::Swap(std::vector<double> & list, int i, int j )
{
    double temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

void Partition(std::vector<double> & list, int pivotIndex)
{
    double pivot = list[pivotIndex];  
}


int Sorting::QuickSort(std::vector<double> & list)
{
    if (std::is_sorted(list.begin(), list.end()))
    {
        return 1;
    }

    auto mid = list.begin() + (list.size() / 2);

    Sorting::Partition(list, )
    
}

