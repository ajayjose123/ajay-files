#include<iostream>
#include<cmath>
using namespace std;

int distance(int, int, int , int);

int main()
{
    int x[5], y[5], other[3];
    bool present = false;
    int a, count = 0;
    
      
    for(int i=0; i<4; i++)
        cin>>x[i]>>y[i];
    
    for(int i=1, j=0; i<4; i++)
    {
        if((x[0] != x[i]) && (y[0] != y[i]))
        {
            present = true;
            count++;
            a = i;
        }
        else
            other[j++] = i;
    }
    
    if(present == true && count == 1)
    {
        int d1 = distance(x[0], y[0], x[a], y[a]);
        int d2 = distance(x[other[0]], y[other[0]], x[other[1]], y[other[1]]);
        if(d1==d2)
            cout<<"yes";
        else
            cout<<"no";
    }
    else
        cout<<"no";
    
    
    return 0;
}

int distance(int x1, int y1, int x2, int y2)
{
    int d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return d;
}
