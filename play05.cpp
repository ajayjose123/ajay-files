#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;

int calc(char);

int main()
{
  string a;
  cin>>a;
  
  int sum = 0;
  
  bool inv = false;
  
  for(int i=0; i<a.length(); i++)
  {
    if(isalpha(a[i]))
    {
      if((a[i] != 'I' && a[i] != 'i') && (a[i-1] == 'I' || a[i-1] == 'i'))
        {
          sum += (calc(a[i]) - 2);
        }
      else
      {
        sum += calc(a[i]);  //jihuh
      }
        
    }
    else
      {
        inv = true;
        cout<<"Invalid";
      }
  }
  
  if(inv == false)
    cout<<sum;
  
  return 0;
  
}

int calc(char a)
{
  int val = 0;
  switch(a)
  {
    case 'I':
    case 'i':
      {
        val = 1;
        break;
      }
      
    case 'V':
    case 'v':
      {
        val = 5;
        break;
      }
    case 'X':
    case 'x':
      {
        val = 10;
        break;
      }
  }
  
  return val;
}
