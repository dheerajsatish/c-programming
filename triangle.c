#include <stdio.h>
int main()
{
int area,perimeter,a,b;
printf("enter the a of the triangle \n");
printf("enter the b of the triangle \n");
scanf("%d %d",&a,&b);
area=0.5*a*b;
perimeter = 2*(a+b);
printf("area of trian %d:", area);
printf("perimeter of the  triangle%d", perimeter);
}
