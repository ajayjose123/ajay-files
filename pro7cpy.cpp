#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int n, i = 0;
  cin>>n;
  
  while(pow(2, i) < n)
  {
    i++;
  }
  
  cout<<(n - pow(2, i-1)); // prints the output.
  
  return 0;
}
