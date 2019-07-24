#include<iostream>
using namespace std;
int main()
{
  char a;
  cin>>a;
  switch(a)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      cout<<"Vowel";
      break;
    case (isalpha(a)):
      cout<<"Consonant";
      break;
    default:
      cout<<"Invalid";
  }
  return 0;
}
