#include<iostream>
using namespace std;

int main()
{
  int n, k, a[100], sum = 0;
  cin>>n>>k;
  
  for(int i=0; i<n; i++)
    cin>>a[i];
  
  for(int i = 0; i<k; i++)
    sum += a[i];
  
  cout<<sum;
  return 0;
}
