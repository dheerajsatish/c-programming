#include <stdio.h>
int main()
{
int a,b,temp;
printf("enter the values of a and b:");
scanf("%d" "%d" ,&a, &b);
printf("the previous values of a and b= %d,%d \n", a,b);
temp=a;
a=b;
b=temp;
printf("the value of a and b= %d,%d \n" ,a,b);
}
