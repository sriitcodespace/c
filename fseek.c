#include <stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
fp=fopen("file.txt","wt");
fputs("this is language",fp);
fseek(fp,7,SEEK_SET);
fputs(" c progarming language",fp);
fclose(fp);
return 0;
}

