#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    for(int n=2;n<=100;n++)
    {
        flag=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<n<<endl;
        }
    }
}