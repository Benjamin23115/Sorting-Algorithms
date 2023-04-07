#pragma once

/**
 * Function peforms a selection sort of the int array passed in.
 *
 * @array - The array to be sorted
 * @size - The length of the array to be sorted
 */
void selectionSort(int *array, int size)
{
    for(int j = 0; j < size; j++)
    {
        int smallest = j;
        for(int i = j+1; i < size; i++)
        {
            if(array[i] < array[smallest])
            {
                smallest = i;
            }
        }

        // swap array[smallest] with array[0]
        int tmp = array[j];
        array[j] = array[smallest];
        array[smallest] = tmp;
    }
}

void insertionSort(int *array, int size)
{
    for (int i = 1; i < size; ++i)
    {
        /* code */
        int current = i;
        while(current > 0 && array[current] < array[current-1])
        {
            int temp = array[current];
            array[current] = array[current-1];
            array[current-1] = temp;
            current--;
        }
    }
}

void bubbleSort(int *array, int size)
{
    bool swapped = false;

    do
    {
        swapped = false;
        // loop over each element of the array
        for(int i = 0; i < size-1; i++)
        {
            // Compare with the element immediately after
            if(array[i] > array[i+1])
            {
                // if the item is greater than it's neighbor, swap
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = true;
            }
        }

    }while(swapped);
}
