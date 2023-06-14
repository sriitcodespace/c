#include<stdio.h>
#include<stdlib.h>
void main()
{
int rno;
char name[50];
int percentage;
int num,i;
printf("enter no.of students\n");
scanf("%d",&num);
FILE *fp;
fp=fopen("student.dat","w");
if(fp==NULL)
{
printf("error");
exit(1);
}
for(i=0;i<num;i++)
{
printf("enter rollno name percentage \n");
scanf("%d%s%d",&rno,name,&percentage);

fprintf(fp,"%d\t%s\t%d\n",rno,name,percentage);
}
fclose(fp);
}

