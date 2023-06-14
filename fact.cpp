#include<iostream>
using namespace std;
int main()
{
int i,n,fact=1;
cout<<"enter n value";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"factorial of "<<n<<"is "<<fact;
return 0;
}
