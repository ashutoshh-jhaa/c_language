#include "stdio.h"
void selSort(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if ((*(a + j)) < (*(a + minIndex)))
      {
        minIndex = j;
      }
    }
    if (minIndex != i)
    {
      int temp = *(a + minIndex);
      *(a + minIndex) = *(a + i);
      *(a + i) = temp;
    }
  }
}
void insertValues(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", (a + i));
  }
}
void dispArray(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] = %d\n", i, *(a + i));
  }
}
int main()
{
  int n; // for the size of array
  printf("Enter the size of array : ");
  scanf("%d", &n);

  int a[n]; // declared array of size n
  insertValues(a, n);
  selSort(a, n);
  printf("The sorted array : \n");
  dispArray(a, n);
}