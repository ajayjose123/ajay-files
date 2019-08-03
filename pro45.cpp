#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string a;
  a = to_string(n);
  int ZeroCount = 0;
  
  string revA = a;
  
  reverse(revA.begin(), revA.end());
  
  if(a == revA)
    cout<<"yes";
  else
    {
        if(n%10 == 0)
        {
            while(n%10 == 0)
            {
                ZeroCount++;
                n/=10;
            }
            
            string NewString = "0";
            for(int i = 0; i<ZeroCount-1; i++)
                NewString.append("0");
                
            NewString += a;
            
            string revNewString = NewString;
            reverse(revNewString.begin(), revNewString.end());
            
            if(NewString == revNewString)
                cout<<"yes";
            else
                cout<<"no";
        }
        else
            cout<<"no";
    }
  return 0;
}
