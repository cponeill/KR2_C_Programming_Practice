#include <stdio.h>

/* twoSum: Given an array of integers, return indicies of the two numbers such that they add up to a specific target. */
int twoSum(int arr[], int target)
{
  int i, j;

  for (i = 0; i <= sizeof(arr); i++) {
    for (j = i+1; j <= sizeof(arr); j++) {
      if (i != j && arr[i] + arr[j] == target)
        printf("[%d,%d]\n", i, j);
    }
  }
}


int main(void)
{
    int array[] = {3, 2, 4};
    int target = 6;
    twoSum(array, target);
}
