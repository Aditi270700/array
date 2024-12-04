#include<iostream>
using namespace std;
int main (){
int s=1;
for(int i=1; i<=3; i++)
{
for(int j=1; j<=i; j++)
{
cout<<s<<"\t";
s++;
}
cout<<"\n";
}
}
