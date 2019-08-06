#include<iostream>
using namespace std;
int main()
{
  string a, b;
  cin>>a>>b;
  
  bool present = false;
  
  for(int i=0; i<a.length(); i++)
  {
    for(int j=0; j<b.length(); j++)
    {
      if(a[i] == b[j])
      {
        if(a[i+1] == b[j+1])
        {
          present = true;
          break;
        }
      }
    }
    
    if(present == true)
        break;
  }
  
  if(present == true)
      cout<<"yes";
    else
      cout<<"no";
  
  return 0;
}
