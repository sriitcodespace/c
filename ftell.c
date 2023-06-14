#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *f;
int len;
f=fopen("file.txt","r");
if(f==NULL)
{
printf("error");
exit(1);
}
fseek(f,0,SEEK_END);
len=ftell(f);
fclose(f);
printf("size of file=%d bytes",len);
}

