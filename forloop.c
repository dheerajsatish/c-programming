#include <stdio.h>
int main()
{
int counter;
for(counter==5;counter<=10;counter++)
{
if(counter==5)
{
continue;
}
printf("%d \n",counter);
}
}

#include <stdio.h>
int main()
{
int counter,i;
for(counter=5,i=5,counter<=10,i<=10,counter++)
{
printf("%d %d \n",counter);
}
}

