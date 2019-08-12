#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    set <int> repElements;
    
    for(int i=0; i<n; i++)
        cin>>a[i];
        
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
                repElements.insert(a[i]);
        }
    }
    
    if(repElements.empty())
        cout<<"unique";
    else
    {
        set <int, greater<int>> :: iterator itr;
        
        for(itr = repElements.begin(); itr != repElements.end(); ++itr)
            cout<<*itr<<' ';
    }
    
    return 0;
}
