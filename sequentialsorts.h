#pragma once

/**
 * Function peforms a selection sort of the int array passed in.
 *
 * @array - The array to be sorted
 * @size - The length of the array to be sorted
 */
void selectionSort(int *array, int size)
{
    for (int j = 0; j < size; j++)
    {
        int smallest = j;
        for (int i = j + 1; i < size; i++)
        {
            if (array[i] < array[smallest])
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
        while (current > 0 && array[current] < array[current - 1])
        {
            int temp = array[current];
            array[current] = array[current - 1];
            array[current - 1] = temp;
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
        for (int i = 0; i < size - 1; i++)
        {
            // Compare with the element immediately after
            if (array[i] > array[i + 1])
            {
                // if the item is greater than it's neighbor, swap
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }

    } while (swapped);
}
void merge(int *array, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[middle + 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int *array, int left, int right)
{
    if (left < right)
    {
        int middle = (left + (right - left) / 2);
        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}