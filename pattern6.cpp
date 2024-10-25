#include <iostream>
using namespace std;
int main (){
for(char r=65; r<=67;r++)
{
for(char c=67; c>r; c--)
{
cout << " ";
}
for(char s=r; s>=65; s--)
{
cout<<char(s);
}
cout << "\n";
}
}