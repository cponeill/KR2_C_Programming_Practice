#include <stdio.h>

/* countPairsWithDiff: count distinct pairs in an array of integers. */
int countPairsWithDiff(int arr[], int n, int k)
{
  int count = 0, i;
  qsort(arr, arr+1);

  for (i = 0; i < n-1; i++)
    if (binarySearch(arr, i+1, n-1, arr[i] + k) != -1)
      count++;

  return count;
}


int binarySearch(int arr[], int high, int low, int x)
{
  if (high >= low)
  {
    int mid = low + (high-low)/2;
    if (x == arr[mid])
        return mid;
    if (x > arr[mid])
        return binarySearch(arr, low, (high-1), x);
    else
        return binarySearch(arr, (low+1), high, x);
  }
  return -1;
}


int main(void)
{
  int arr[] = {1, 5, 3, 4, 2};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  countPairsWithDiff(arr, n, k);
  return 0;
}
