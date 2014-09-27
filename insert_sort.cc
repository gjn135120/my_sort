#include "sort.h"

void insert_sort(int *arr, int len)
{
    int pos, index, key;
    for(pos = 1; pos != len; ++ pos)
    {
        key = arr[pos];
        for(index = pos - 1; index >= 0; -- index)
        {
            if(arr[index] > key)
                arr[index + 1] = arr[index];
            else
                break;
        }
        arr[index + 1] = key;
    }
}
