#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n, digits = 0, cpy, rev = 0, r;
  cin >> n;
  
  cpy = n;
  
  while(cpy!=0)
  {
    cpy/=10;
    digits++;
  }
  
  cpy = n;
  for(int i = 1; i<=digits; i++)
  {
    r=cpy%10;
    rev += r*pow(10, (digits - i));
    cpy/=10;
  }
  
  if(n!=rev)
    cout<<"no";
  else
    cout<<"yes";
  
  return 0;
}
