#include<iostream>
using namespace std;

int main()
{
  int y;
  bool lp = false;
  cin>>y;
  if(y%100 == 0)
  {
    if(y%400 == 0)
    {
      cout<<"yes";
      lp = true;
    }
  }
  else
  {
    if(y%4 == 0)
    {
      cout<<"yes";
      lp = true;
    }
  }
  
  if(lp == false)
  {
    cout<<"no";
  }
  return 0;
}
