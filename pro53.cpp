#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    bool present = false;
    
    string a;
    getline(cin, a);
    
    char u[27];
    
    for(int i=65,j=0; i<=90; i++)
        u[j++] = i;
        
    char l[27];
    
    for(int i=97,j=0; i<=122; i++)
        l[j++] = i;
        
    for(int i=0; i<=26; i++)
    {
        for(int j=0; j<a.length(); j++)
        {
            if((u[i] == a[j]) || (l[i] == a[j]))
            {
                present = true;
                break;
            }
        }
        if(present == true)
        {
            present = false;
            count++;
        }
        else
            break;
    }
    
    if(count == 26)
        cout<<"yes";
    else
        cout<<"no";
        
    return 0;
}
