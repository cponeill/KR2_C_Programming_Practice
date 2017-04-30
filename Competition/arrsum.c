#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Given an array A[] and a number x, check for pair in A[] with sum x. */
int pairSum(int arr[], int size, int x)
{
  int i, j;
  for (i = 0; i <= size; i++)
    for (j = i+1; j <= size; j++)
      if ((i != j) && (arr[i] + arr[j] == x)) {
        return 1;
      }
  return 0;
}

int main(void)
{
  int array[] = {-8, 1, 4, 6, 10, 45};
  int size = sizeof(array) / sizeof(array[0]);
  printf("This is the size: %d.\n", size);
  pairSum(array, size, 5);
}
