#include <stdio.h>

/* binarySearch: Standard binary search function. */
int binarySearch(int arr[], int low, int high, int x)
{
  if (high >= low)
  {
    int mid = low + (high-low)/2;
    if (x == arr[mid)
      return mid;
    if (x > arr[mid)
      return binarySearch(arr, (mid+1), high, x);
    else
      return binarySearch(arr, low, (mid-1), x);
  }
}
