#include "sort.h"

void bubble_sort(int *arr, int len)
{
   int up, down;
   for(up = 0; up != len; ++ up)
   {
       for(down = 0; down != len - up - 1; ++ down)
       {
           if(arr[down] > arr[down + 1])
               swap(arr[down], arr[down + 1]);
       }
   }
}
