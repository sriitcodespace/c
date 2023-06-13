#include<stdio.h>
struct sample
{
int a;
float b;
char c;
};
void fun(struct sample s);
void main ()
{
struct sample s1;
s1.a=1;
s1.b=2.1;
s1.c='a';
fun(s1);
}
void fun(struct sample s)
{
printf("a=%d\n",s.a);
printf("b=%f\n",s.b);
printf("c=%c\n",s.c);
}


