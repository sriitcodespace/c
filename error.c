#include<stdio.h>
#include<stdlib.h>
#include<error.h>
void main()
{
int x=10;
int y=0;
int q;
if(y==0)
{
fprintf(stderr,"division by zero!");
exit(1);
}q=x/y;

fprintf(stderr,"value of quotient %d\n",q);
exit(1);
}

