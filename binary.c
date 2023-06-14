#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
struct std
{
int rno;
char name[25];
};
struct std s;
fp=fopen("end.bin","wb");
if(fp==NULL)
{
printf("error");
exit(1);
}
else
{
printf("enter rno name \n");
scanf("%d%s",&s.rno,s.name);
fwrite(&s,sizeof(struct std),1,fp);
}fclose(fp);
}

