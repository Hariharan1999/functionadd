#include<stdio.h>
int comp(int a,int b)
{
  if(a>b&&b<a)
    printf("a is greater than b",a,b);
  else
    printf("b is greater than a",b,a);
  return 0;
}
void main()
{
  int c;
  printf("Enter the value of a and b\n");
  scanf("%d%d",&a,&b);
  c=comp(a,b);
}
  
