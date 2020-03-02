#include <stdio.h>
int main()
{
char name[30];
int m1,m2,m3,total;
float average;
printf("enter your name");
scanf("%s", name);
printf("enter three subject marks: ");
scanf("%d %d %d", &m1, &m2, &m3);
total=m1+m2+m3;
average=(m1+m2+m3)/3.0;
printf("name=%s \n", name);
printf("total=%d \n", total);
printf("average=%f \n", average);
}
