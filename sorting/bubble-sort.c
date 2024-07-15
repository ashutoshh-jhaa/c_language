#include "stdio.h"

void insertValues(int *, int n);
void dispArray(int *, int n);
void bsort(int *, int n);

int main()
{
  int n; // for the size of array
  printf("Enter the size of array : ");
  scanf("%d", &n);

  int a[n]; // declared array of size n

  insertValues(a, n); // inserting values into array
  printf("Unsorted array : \n");
  dispArray(a, n); // display array
  bsort(a, n);     // bubble sorting algorithm

  return 0;
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

void bsort(int *a, int n)
{
  int temp;

  for (int i = 0; i < n - 1; i++) // outer loop for number of passes
  {
    for (int j = 0; j < n - i - 1; j++) // inner loop for each pass
    {
      if ((*(a + j) > (*(a + j + 1)))) // swapping logic
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