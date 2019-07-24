#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
if(n<0)
  cout<<"Invalid";
else if(n%2==0)
  cout<<"Even";
else 
  cout<<"Odd";
return 0;
}
