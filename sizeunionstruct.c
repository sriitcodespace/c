#include<stdio.h>
void main()
{
union sample
{
int x;
float y;
};
struct sample1
{
char name[20];
float f;
};
union sample s1;
struct sample1 s2;
printf("size of union=%d\n",sizeof(s1));
printf("size of structure=%d",sizeof(s2));
}
