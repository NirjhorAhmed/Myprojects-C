#include <stdio.h>
int main()
{
  int a[] = {12, 5, 9, 1, 4, 7}, i, temp, j;
  int n = sizeof(a) / sizeof(a[0]);
  printf("Original Array:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  for (i = 1; i < n; i++)
  {
    temp = a[i];
    j = i - 1;

    while (j >= 0 && a[j] < temp)
    {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = temp;
  }
  printf("Sorted array:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
