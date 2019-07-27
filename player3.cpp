#include<iostream>
using namespace std;

int main()
{
  int n, dc, rev = 0, r, cpy;
  cin>>n;
  
  cpy = n;
  while(cpy!=0)
  {
    cpy/=10;
    dc++;
  }
  
  for(int i=1; i<=dc; i++)
  {
    r = n%10;
    rev = (rev*10) + r;
    n/=10;
  }
  
  cout<<rev;
  
  return 0;
}
