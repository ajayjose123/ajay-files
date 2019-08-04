#include<iostream>
using namespace std;

int main()
{
  int n, q, min;
  cin>>n>>q;
  
  int x[q], y[q];
  int a[n];
  for(int i = 0; i<n; i++)
    cin>>a[i];
    
  for(int i=0; i<q; i++)
    cin>>x[i]>>y[i];
    
  for(int i=0; i<q; i++)
  {
    min = a[x[i]-1];
    for(int j = x[i]; j<y[i]; j++)
    {
      if(a[j] < min)
        min = a[j];
    }
    cout<<min<<endl;
  }
  return 0;
}
