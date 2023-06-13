#include <stdio.h>
#include <string.h>
struct clg_detail
{
int college_id;
char college_name[50];
};
struct std_detail
{
int id;
char name[20];
float percentage;
struct clg_detail cd;
}std;
int main()
{
struct std_detail sd ={3351,"krishna",92.5,0005,"sriit"};
printf("id is :%d\nname:%s\npercentage:%f\ncollege id :%d\ncollege name:%s\n",sd.id,sd.name,sd.percentage,sd.cd.college_id,sd.cd.college_name);
return 0;
}

