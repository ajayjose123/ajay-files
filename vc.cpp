#include<iostream>
#include<stdlib>
using namespace std;
int main()
{
  char a;
  cin>>a;
  if(isalpha(a))
  {
    if(a == 'a'||a == 'A'||a == 'e'||a == 'E'||a == 'i'||a == 'I'||a == 'o'||a == 'O'||a == 'u'|| a == 'U')
      cout<<"Vowel";
    else
      cout<<"Consonant";
  }
  else
    cout<<"Invalid";
  return 0;
}
