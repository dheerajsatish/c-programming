#include<stdio.h>
int main()
{
int side1, side2, side3;
printf(" Please Enter Three Sides of a Triangle \n");
scanf("%d %d %d", &side1, &side2, &side3);
if( (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2) )
{
printf("This is a Valid Traingle \n ");
}
else
{
printf("This is an Invalid Triangle \n ");
}  
return 0;
}
