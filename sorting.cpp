#include "arrayutils.h"
#include "sequentialsorts.h"
#include <chrono>
using namespace std::chrono;

using namespace std;

const int ARRAY_SIZE = 14;

int main(int argc, char const *argv[])
{
    int array[] = {5, 37, 15, 24, 2, 65, 7, 9, -1, 15, -7, 88, 77, 0};

    cout << "Selection Sort" << endl;
    int *copy = generateIntArrayCopy(array, ARRAY_SIZE);

    printIntArray(copy, ARRAY_SIZE);
    selectionSort(copy, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);

    delete[] copy;

    cout << "========================================" << endl;
    cout << "Insertion Sort" << endl;
    copy = generateIntArrayCopy(array, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);
    insertionSort(copy, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);

    delete[] copy;

    cout << "========================================" << endl;
    cout << "Bubble Sort" << endl;
    copy = generateIntArrayCopy(array, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);
    bubbleSort(copy, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);

    delete[] copy;

    cout << "========================================" << endl;
    cout << "Merge Sort" << endl;
    copy = generateIntArrayCopy(array, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);
    mergeSort(copy, 0, ARRAY_SIZE - 1);
    printIntArray(copy, ARRAY_SIZE);

    delete[] copy;
    // Did the bubble sorting outside of the other bubble sort to keep the code organized
    // I wanted to use actual data for the array rather than blank arrays so I "randomized" the data each time
    cout << "========================================" << endl;
    cout << "Bubble Sort Timed" << endl;
    int ArraySize = 100;
    for (int i = 0; i < 3; i++)
    {
    auto start = high_resolution_clock::now();
        copy = generateIntArrayCopy(array, ArraySize);
        for (int j = 0; j < ArraySize; j++)
        {
            copy[j] = rand();
        }
        bubbleSort(copy, ArraySize);
        ArraySize *= 10;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken at ArraySize: "<< ArraySize <<" "<< duration.count() << " microseconds" << endl;
    }
    delete[] copy;

    return 0;
}
