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
fp=fopen("end.bin","rb");
if(fp==NULL)
{
printf("error");
exit(1);
}
else
{
fread(&s,sizeof(struct std),1,fp);
printf("roll no:%d,name%s",s.rno,s.name);
}fclose(fp);
}

