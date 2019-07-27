#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int r, sum = 0, n, cpy, dc = 0;
  cin>>n;
  
  cpy = n;
  while(cpy!=0)
  {
    cpy/=10;
    dc++;
  }
  
  cpy = n;
  
  for(int i=1; i<=dc; i++)
  {
    r = cpy%10;
    sum += pow(r,dc);
    cpy/=10;
  }
  
  if(sum == n)
    cout<<"yes";
  else
    cout<<"no";
    
  return 0;
}
