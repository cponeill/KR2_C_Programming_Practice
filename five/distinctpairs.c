#include <stdio.h>

int countPairsWithDiff(int arr[], int k)
{
  int i, j;
  int count = 0;

  for (i = 0; i < sizeof(arr); i++)
  {
    for (j = i + 1; j < sizeof(arr); j++)
      if (arr[i] - arr[j] == k || arr[j] - arr[i] == k)
        count++;
  }
  return count;
}
