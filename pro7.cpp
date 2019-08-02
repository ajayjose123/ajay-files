#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int p, n, i = 0, result;
  cin>>n;
  
  
  
  while(pow(2,i) < n)
    i++;
  
  p = pow(2, i);
  
  if(p > n)
    p = pow(2, i-1);
  
  result = n - p;
  
  cout<<p<<endl<<result;
  
  //return 0;
}
