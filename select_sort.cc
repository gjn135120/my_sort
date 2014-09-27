#include "sort.h"

void select_sort(int *arr, int len)
{
    int index, pos, min;
    for(pos = 0; pos != len; ++ pos)
    {
        min = pos;
        for(index = pos + 1; index != len; ++ index)
        {
            if(arr[min] > arr[index])
                min = index;
        }
        if(min != pos)
            swap(arr[min], arr[pos]);
    }
}
