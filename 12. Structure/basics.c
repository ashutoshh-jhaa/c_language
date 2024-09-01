#include "stdio.h"
#include "string.h"
int main()
{
  struct Books
  {
    int bookid;
    float bookprice;
    char bookname[20];
  } b1, b2, b3;

  b1.bookid = 32;
  b1.bookprice = 23.2f;
  strcpy(b1.bookname,"ashu");
  fgets(b1.bookname,10,stdin);
  printf("%s", b1.bookname);
}