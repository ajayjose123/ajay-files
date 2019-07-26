#include<iostream>
using namespace std;

int main()
{
  int n;
  bool p = true;
  cin >> n;
  
  for(int i=2; i<=(n/2); i++)
  {
    if(n%i == 0)
      p = false;
  }
  
  if(p==true)
    cout<<"yes";
  else
    cout<<"no";
    
  return 0;
}
