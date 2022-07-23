#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d,qube=0;
    cout<<"0"<<endl;
    for (int i = 1; i <= 1000; i++)
    {
        d = i;
        qube=0;
        while (d)
        {
            qube=qube+(d%10)*(d%10)*(d%10);
            d=d/10;
        }
        if(i==qube)
        cout<<i<<endl;
    }
}