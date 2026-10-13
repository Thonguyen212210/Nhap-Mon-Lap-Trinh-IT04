#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define task "gavacho"
#define endl '\n'

using namespace std;

void file()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    if (fopen(task ".inp", "r"))
    {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }
}


signed main()
{
   // file();
    long long x,y;
    cin >> x >> y;
    
    cout << (4*x-y)/2 << " "<< x - (4*x-y)/2;
    return 0;
}