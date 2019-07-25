#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n, digits = 0, cpy, rev, r;
  cin>>n;
  cpy = n;
  
  while(cpy!=0)
  {
    cpy/=10;
    digits++;
  }
  
  for(int i = 0; i<digits; i++)
  {
    r = n%10;
    rev += r * pow(10, (digits - i));
  }
  
  if(n == rev)
  cout<<"yes";
  else
  cout<<"no";
  
  return 0;
}
