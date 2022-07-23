#include "bits/stdc++.h"
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int n = (a < b) ? a : b; n >= 1; n--)
    {
        if (a % n == 0 && b % n == 0)
        {
            cout << n << endl;
            break;
        }
    }
}