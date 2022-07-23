#include"bits/stdc++.h"
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n;
    if(a<b)
    n=a;
    else 
    n=b;
    for(int i=n;n>1;n--)
    {
        if(a%n==0 && b%n==0)
        {
            cout<<"are not co prime numbers"<<endl;
            break;
        }
    }
    if(n==1)
    cout<<"are prime numbers"<<endl;
}