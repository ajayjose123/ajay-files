#include<iostream>
using namespace std;

int main()
{
  int a, b;
  bool p = true;
  cin>>a>>b;
  
  for(int i=a+1; i<b; i++)
  {
      p = true;
    for(int j=2; j<=i/2; j++)
    {
      if(i%j == 0)
      {
        p = false;
        break;
      } 
    }
    if(p==true)
      cout<<i<<" ";
  }
  
  return 0;
}
