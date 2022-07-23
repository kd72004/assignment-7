#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,qub=0;
    cin>>n;
    d=n;
    while(d)
    {
        qub=qub+(d%10)*(d%10)*(d%10);
        d=d/10;
    }
    if(qub==n)
    cout<<"It's a amstrong number "<<endl;
    else 
    cout<<"It's not a amstrong number "<<endl;
}