#include "sort.h"

static int func1(int *arr, int low, int high)       //普通方法
{
    int key = arr[low];
    while(low < high)
    {
        while(low < high && arr[high] >= key)
            -- high;
        if(low >= high)
            break;
        else
            swap(arr[high], arr[low]);

        while(low < high && arr[low] <= key)
            ++ low;
        if(low < high)
            swap(arr[high], arr[low]);
    }

    return low;
}

static int func2(int *arr, int low, int high)       //快慢指针
{
    int fast = low + 1, last = low;
    int key = arr[low];
    for(; fast <= high; ++ fast)
    {
        if(arr[fast] < key)
        {
            swap(arr[last + 1], arr[fast]);
            ++ last;
        }
    }
    swap(arr[low], arr[last]);
    return last;
}

void quick_sort(int *arr, int len)
{
    if(len <= 10)
        insert_sort(arr, len);
    else
    {
        int index = func2(arr, 0, len - 1);
        quick_sort(arr, index + 1);
        quick_sort(arr + index + 1, len - index - 2);
    }
}

