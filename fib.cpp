#include<iostream>
using namespace std;
int main()
{
int n,x,y,z,i;
x=0;
y=1;
z=x+y;
cout<<"enter n value\n";
cin>>n;
cout<<"series:";
cout<<x<<y;
for(i=3;i<=n;i++)
{
cout<<z;
x=y;
y=z;
z=x+y;
}
return 0;
}
