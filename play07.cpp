#include<iostream>
using namespace std;
int main()
{
  char a[30],temp;
  cin.getline(a,30);
  for(int i=0; a[i]!='\n'; i+=2)
  {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=a[i];
  }
  cout<<a;
}
