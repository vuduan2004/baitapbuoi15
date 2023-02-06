#include <stdio.h>

int main()
{
  int a;
  printf("Moi nhap vao tuoi ");
      scanf("%d", &a);
  if (a > 0 && a <= 2)
  {
    printf("tre so sinh");
  }
  else if (a > 2 && a <= 10)
  {
    printf("nhi dong");
  }
  else if (a > 10 && a <= 17)
  {
    printf("vi thanh nien");
  }
  else if (a > 17 &&a <= 39)
  {
    printf(" thanh nien");
  }
  else if (a > 39 &&a <= 50)
  {
    printf("trung nien");
  }
  else if (a > 50 &&a < 100)
  {
    printf(" cao nien");
  }
}
