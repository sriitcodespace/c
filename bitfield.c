#include <stdio.h>
#define flag1 0
#define flag2 1
#define a 1
#define b 2
#define c 3
void main()
{
struct sample 
{
int x;
unsigned int y:1;
unsigned int z:2;
}s;
s.x=111;
s.y=flag2;
s.z=a;
printf("%d%d%d\n",s.x,s.y,s.z);
s.x=222;
s.y=flag1;
s.z=b;
printf("%d%d%d\n",s.x,s.y,s.z);

s.x=333;
s.y=flag1;
s.z=c;
printf("%d%d%d\n",s.x,s.y,s.z);
}

