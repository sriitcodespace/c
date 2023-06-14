#include<iostream>
using namespace std;
int main()
{
int a[10][10],b[10][10],d[10][10],r,c,i,j,k;
cout<<"enter the no of rows and colums:";
cin>>r>>c;
cout<<"enter a matrix elements";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
cout<<"enter elements of b matrix";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
d[i][j]=0;
for(k=0;k<c;k++)

{
d[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<"\t"<<d[i][j];
}
cout<<"\n";
}
return 0;

}

