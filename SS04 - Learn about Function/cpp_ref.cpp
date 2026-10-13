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

int solon(int &m, int &n)
{
    if (n > m)
        m = n;
    return m;
}

signed main()
{
    file();
    int m = 8, n = 36;
    int o = solon(m, n);

    cout << "UCLN cua " << m << " va " << n << " la " << o;
    return 0;
}