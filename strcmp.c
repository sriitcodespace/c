#include<stdio.h>
#include<string.h>
int main()
{
int result;
char str1[5]="abcd";
char str2[5]="abCd";
char str3[5]="abCd";
result=strcmp(str1,str2);
printf("strcmp(str1,str2)=%d\n",result);
result=strcmp(str2,str3);
printf("strcmp(str2,str3)=%d\n",result);
return 0;
}
