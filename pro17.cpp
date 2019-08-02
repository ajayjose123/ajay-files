#include<iostream>
using namespace std;

int main()
{
  int n, k;
  cin>>n>>k;
  
  bool y = false;
  
  int a[n];
  
  for(int i = 0; i<n; i++)
    cin>>a[i];
    
  for(int i = 0; i<n; i++)
  {
    for(int j = i+1; j<n; j++)
    {
      if(a[i] + a[j] == k)
        y = true;
    }
  }
  
  if(y == true)
    cout<<"yes";
  else
    cout<<"no";
    
  return 0;
}
