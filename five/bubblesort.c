#include <stdio.h>

/* bubbleSort: Simple Bubblesort Algorithm. */
int bubbleSort(int arr[])
{
  int i, j, temp;

  for (i = 0; i < sizeof(arr); i++)
    for (j = i+1; j < sizeof(arr); j++)
      if (arr[i+1] > arr[j])
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;

  return temp;
}

int main(void)
{
  /* Add code to call bubbleSort function here. */
  int arr[] = {5, 3, 7, 2, 8, 1, 9, 6};
  bubbleSort(arr);
}
