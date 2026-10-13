// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define task "BANK"
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

long long giathua(long long n)
{
    if (n == 0)
        return 1;
    else
        return n * giathua(n - 1);
}

signed main()
{
    file();

    cout << giathua(3);

    return 0;
}