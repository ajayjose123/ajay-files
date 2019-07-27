#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int a, b, r, sum, cpy, dc;
  cin>>a>>b;
  
  for(int i=a+1; i<b; i++)
  {
    dc = 0;
    sum = 0;
    cpy = i;
    while(cpy != 0)
    {
      cpy/=10;
      dc++;
    }
    
    cpy = i;
    
    for(int j=1; j<=dc; j++)
    {
      r = cpy%10;
      sum += pow(r,dc);
      cpy/=10;
    }
    
    if(sum == i)
      cout<<sum<<" ";
  }
  
  return 0;
}
