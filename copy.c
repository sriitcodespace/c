#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fs,*fd;
char ch;
fs=fopen("student.dat","r");
if (fs==NULL)
{
printf("error 1");
exit(0);
}
fd=fopen("dest.txt","w");
if (fd==NULL)
{
printf("error 2");
exit(0);
}
while(1)
{
ch=fgetc(fs);
if(ch==EOF)
break;
else
fputc(ch,fd);
}
fclose(fs);
fclose(fd);
printf("success");
}

