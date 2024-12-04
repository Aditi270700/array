#include<iostream>
using namespace std;
int main (){
int a=1, k=0, d;
for(int i=1; i<=5; i++)
{
for(int s=5; s>i; s--)
{
cout<<"";
}
for(int j=1; j<=i; j++)
{
d=a;
a=k;
k=d;
cout<<d<<" ";
}
cout<<"\n";
}
}