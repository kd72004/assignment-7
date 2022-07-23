#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    a=-1;
    b=+1;
    for(int i=1;i<=n;++i)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}