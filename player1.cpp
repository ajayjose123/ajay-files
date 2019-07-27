#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  
  reverse(begin(s), end(s));
  cout<<s;
  
  return 0;
}
