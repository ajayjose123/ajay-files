#include<iostream>
#include<ctype.h>
#include<algorithm>

using namespace std;

void calc(char, char);

int main()
{
    string a, b;
    cin>>a>>b;

    if(a.length() != b.length())
        cout<<"Invalid";
    
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    for(int i=0; i<a.length(); i++)
    {
        calc(a[i], b[i]);
    }
    
    return 0;
}

void calc(char a, char b)
{
    int A, B;
    A = a;
    B = b - 97;
    
    int sum = A + B + 1;
    if(sum > 122)
        sum -= 26;
    
    char c = sum;
    cout<<c;
}
