#include "sort.h"

static void func(int *arr, int low, int high)
{
    int index;
    int key = arr[low];
    for(index = 2 * low + 1; index <= high; index = 2 * index + 1)
    {
        if(index < high && arr[index] < arr[index + 1])
            ++ index;
        if(key > arr[index])
            break;
        arr[low] = arr[index];
        low = index;
    }
    arr[low] = key;
}


void heap_sort(int *arr, int len)
{
    if(len <= 10)
        insert_sort(arr, len);
    else
    {
        int index;
        for(index = (len - 2) / 2; index >= 0; -- index)
            func(arr, index, len - 1);
        for(index = len - 1; index > 0; -- index)
        {
            swap(arr[0], arr[index]);

            func(arr, 0, index - 1);
        }
    }
}
