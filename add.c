#include<stdio.h>
int add(int a,int b)
{
int c;
c=a+b;
return c;
}
int main()
{
int a,b,z;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
z=add(a,b);
printf("%d+%d=%d",a,b,z);
return 0;
}

