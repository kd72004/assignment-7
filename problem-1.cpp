#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    a=-1;
    b=+1;
    for(int i=1;i<=n;++i)
    {
        c=a+b;
        a=b;
        b=c;
        if(i==n)
        {
            cout<<c;
            break;
        }
    }
}