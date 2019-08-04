#include<iostream>
using namespace std;

int main()
{
  int n, q, sum=0;
  cin>>n>>q;
  
  int x[q], y[q];
  int a[n];
  for(int i = 0; i<n; i++)
    cin>>a[i];
    
  for(int i=0; i<q; i++)
    cin>>x[i]>>y[i];
    
  for(int i=0; i<q; i++)
  {
    sum = 0;
    for(int j=x[i]-1; j<y[i]; j++)
    {
      sum += a[j];
    }
    cout<<sum<<endl;
  }
  
  return 0;
}
