#include<stdio.h>
#include<string.h>
int main()
{
char a[20]="program";
char b[20]={'p','r','o','g','r','a','m','\o'};
printf("length of a string a=%d\n",strlen(a));
printf("length of a string b=%d\n",strlen(b));
return 0;
}
