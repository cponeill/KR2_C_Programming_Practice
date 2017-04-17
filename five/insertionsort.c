#include <stdio.h>

/* Insertion Sort Algorithm. */
int insertionsort(int arr[])
{
  int i, j, index;
  for (i = 1; i < sizeof(arr); i++) {
    index = arr[i];
    j = i;
    while (j > 0 && arr[j-1] > index) {
      arr[j] = arr[j-1];
      j--;
    }
    arr[j] = index;
  }
}


int main(void)
{
  int array[] = {3, 1, 4, 2, 5, 3, 6, 4, 7, 5, 8, 6, 9, 7, 0, 8};
  insertionsort(array);
}
