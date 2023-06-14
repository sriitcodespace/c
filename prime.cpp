#include<iostream>
using namespace std;
int main()
{
int i,j,n,c;
cout<<"enter n value:\n";
cin>>n;


for(i=1;i<n;i++)
{
c=0;
for(j=1;j<=n;j++)
{
if(i%j==0)

c++;


}
if(c==2)
cout<<i<<"";

}
return 0;
}
