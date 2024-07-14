#include "stdio.h"

int insertValues(int *, int n);
int dispArray(int *, int n);
int bsort(int *, int n);

int main()
{
  int n; // for the size of array
  printf("Enter the size of array : ");
  scanf("%d", &n);

  int a[n]; // declared array of size n

  insertValues(a, n); // inserting values into array
  printf("Original array : \n");
  dispArray(a, n); // display array
  bsort(a, n);     // bubble sorting algorithm
}

int insertValues(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", (a + i));
  }
}
int dispArray(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] = %d\n", i, *(a + i));
  }
}

int bsort(int *a, int n)
{
  int temp;

  for (int i = 0; i < n - 1; i++) // number of passes is always one less than  the size of array
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if ((*(a + j) > (*(a + j + 1))))
      {
        temp = *(a + j);
        *(a + j) = *(a + j + 1);
        *(a + j + 1) = temp;
      }
    }
  }
  printf("Array after sorting : \n");
  dispArray(a, n);
}