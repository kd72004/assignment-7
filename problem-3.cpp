#include "bits/stdc++.h"
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> n;
    a = -1;
    b = +1;
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
        if (c == n)
        {
            cout << "it's found " << endl;
            break;
        }
    }
    if (c > n)
    {
        cout << "not found" << endl;
    }
}