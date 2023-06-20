#include<stdio.h>
int main()
{
int fact( int n);
int n,x;
printf("enter n value");
scanf("%d",&n);
x=fact(n);
printf("factorial=%d\n",x);
return 0;
}
int fact(int n)
{
int i,f=1;
if(n==1)
return(f);
{
for(i=1;i<=n;i++)
f=f*i;
return f;
}
}

