#include<stdio.h>
void staticstorage();
void main()
{
int i;
for(i=1;i<=3;i++)
staticstorage();
}
void staticstorage()
{
static int x=0;
x=x+1;
printf("x=%d\n",x);
}

