#include "fun.h"
#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter value of a & b\n");
  scanf("%d",&a);
  scanf("%d",&b);
  c=su(a,b);
  d=prod(a,b);
  printf("Product is %d and Sum is %d",c,d);
  return 0;
}