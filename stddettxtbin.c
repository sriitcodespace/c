#include<stdio.h>
#include<stdlib.h>
void main()
{
struct student
{
int id;
char name[25];
}s;
FILE *ft,*fb;
fb=fopen("sta.bin","wb");
ft=fopen("stu.txt","w");
if(fb==NULL)
printf("error bin");
if(ft==NULL)
printf("error txt");
printf("enter student id,name\n");
scanf("%d%s",&s.id,s.name);
fprintf(ft,"%d%s",s.id,s.name);
fwrite(&s,sizeof(struct student),1,fb);
}

