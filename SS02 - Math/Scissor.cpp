//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;


signed main()
{
    long long m,n, dodai = 0;
    cin >> n >> m;
    m--;
    while (n >= 1 && m >= 1)
    {
        n --;
        m --;
        dodai += m + n; 
    }

    cout << dodai;

    return 0;
}