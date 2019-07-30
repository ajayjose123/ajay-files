#include<iostream>
using namespace std;
int main()
{
  int l,r,f=0,count=0;
  cin>>l>>r;
  for ( int i=l; i<=r;i++)
  {
    for (int j=2; j<=(i/2); j++)
    {
        if( i%j==0)
          {f++; break;}
     }
     if (f==0)
      count++;
      f=0;
  }
  cout<<count;
}
