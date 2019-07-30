#include<iostream>
int main()
{
  int l,r,f=0,count=0;
  cin>>l>>r;
  for ( int i=l; i<=r;i++)
  {
    for (int j=0; i<(i/2); j++)
    {
        if( i%j==0)
          f++;
     }
     if (f==1)
      count++;
  }
  cout<<count;
}
