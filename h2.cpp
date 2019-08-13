#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  bool present = false;
  
  int a[n];
  
  set <int, greater<int>> sortedA;
  
  for(int i=0; i<n; i++)
    cin>>a[i];
    
  set <int, greater<int>> :: iterator itr;
    
  sortedA.insert(a[0]);
  for(int i=1; i<n; i++)
  {
    for(itr = sortedA.begin(); itr != sortedA.end(); ++itr)
    {
      present = false;
      if(a[i] == *itr)
      {
        present = true;
        break;
      }
    }
    if(present != true)
      sortedA.insert(a[i]);
  }
  
  for(itr = sortedA.begin(); itr != sortedA.end(); ++itr)
    cout<<*itr<<' ';
    
  return 0;
}
  
