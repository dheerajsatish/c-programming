#include<stdio.h>
int main()
{
int a,b; char ch;
printf("enter values of a & b \n");
scanf("%d %d", &a,&b);
printf("enter your choice");
scanf("%s", &ch);
switch(ch)
{
case '+': printf("sum of a&b =%d",a+b);
case '-': printf("subtraction of a&b=%d",a-b);
default:
printf("invalid operator");
}
}
