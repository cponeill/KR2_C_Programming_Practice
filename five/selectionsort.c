#include <stdio.h>

/* selectionsort algorithm. */
int selectionsort(int arr[])
{
  int i, j, temp, min;
  for (i = 0; i <= sizeof(arr)-1; i++)
    min = 1;
    for (j = i+1; j < sizeof(arr); j++)
      if (arr[j] < arr[min])
        min = j;
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
  return temp;
}


int main(void)
{
  int i;
  int array[] = {3, 1, 5, 2, 6, 3, 7, 4, 8, 5, 9, 6, 0};
  selectionsort(array);
  for (i = 0; i < sizeof(array); i++) {
    printf("%d\n", array[i]);
  }
}

