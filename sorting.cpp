#include "arrayutils.h"
#include "sequentialsorts.h"

using namespace std;

const int ARRAY_SIZE = 14;

int main(int argc, char const *argv[])
{
    int array[] = {5, 37, 15, 24, 2, 65, 7, 9, -1, 15,-7, 88, 77, 0};

    cout << "Selection Sort" << endl;
    int* copy = generateIntArrayCopy(array, ARRAY_SIZE);
    
    printIntArray(copy, ARRAY_SIZE);
    selectionSort(copy, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);

    delete [] copy;

    cout << "========================================" << endl;
    cout << "Insertion Sort" << endl;
    copy = generateIntArrayCopy(array, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);
    insertionSort(copy, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);

    delete [] copy;

    cout << "========================================" << endl;
    cout << "Bubble Sort" << endl;
    copy = generateIntArrayCopy(array, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);
    bubbleSort(copy, ARRAY_SIZE);
    printIntArray(copy, ARRAY_SIZE);

    delete [] copy;


    return 0;
}
