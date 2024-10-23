#include <iostream>
using namespace std;
int main (){
for(int r=1; r<=3;r++)
{
for(int c=1; c<=r;c++)
{
cout<<char(c+64)<<"\t";
}
cout<<"\n";
}
}
// 2nd method
/*
for(int r=65; r<=67;r++)
{
for(int c=65; c<=r;c++)
{
cout<<char(c)<<"\t";
}
cout<<"\n";
}
}
*/
// 3rd method
/*
for(int r='A'; r<='C';r++)
{
for(int c='A'; c<=r;c++)
{
cout<<c<<"\t";
}
cout<<"\n";
}
}
*/