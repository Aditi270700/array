#include<iostream>
using namespace std;
int main (){
    int t=1;
for(int i=1; i<=3; i++)
{
for(int j=1; j<=i; j++)
{
cout<<t*t<<"\t";
if(t*t==16)
{
goto aditi;
}
t++;
}
cout<<"\n";
}
aditi:
cout<<"\n";
}