#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  string a[n];
  
  bool eql = true;
  
  for(int i=0; i<n; i++)
    cin>>a[i];
  
  string cpy = a[0];
  
  for(int i=0; i<cpy.length(); i++)
  {
    for(int j=1; j<n; j++)
    {
      if(cpy[i] != a[j][i])
      {
        eql = false;
        break;
      }
    }
    
    if(eql == true)
      cout<<cpy[i];
    else
      break;
  }

  
  return 0;
}
