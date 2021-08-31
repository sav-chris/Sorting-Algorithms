#include <vector>

class Sorting
{
public:
    static int BubbleSort(std::vector<double> & list);
    static int QuickSort(std::vector<double> & list);

    static void Swap(std::vector<double> & list, int i, int j);

    static void Partition(std::vector<double> & list, int pivot);
    
};


