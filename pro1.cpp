#include<iostream>
#include<string>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  string a[n];
  string result = NULL;
  
  bool eql = true;
  
  for(int i=0; i<n; i++)
    cin>>a[i];
  
  string cpy = a;
  
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
      result.append(cpy[i]);
    else
    {
      if(result != NULL)
        cout<<result;
      else
        cout<<"No common prefix";
      break;
    }
  }
  
  return 0;
}
