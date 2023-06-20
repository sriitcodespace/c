#include<stdio.h>
void autostorage();
void main()
{
int i;
for(i=1;i<=3;i++)
autostorage();
}
void autostorage()
{
auto int x=0;
x=x+1;
printf("x=%d\n",x);
}

