// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define task "alice_bob_kiemtra"
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
    file();
    long long n, k, p, q, m;
    cin >> n;
    cin >> k;
    cin >> p;
    cin >> q;
    m = n;
    n = n + n % 2;
    p = p * 2 - q % 2;
    if ((k % 2) && (q % 2) && (m >= p + k))
        cout << (p + k + 1) / 2 << " " << 2 - (p + k) % 2;
    else if (p > k)
        cout << (p - k + 1) / 2 << " " << 2 - (p - k) % 2;
    else if (m >= p + k)
        cout << (p + k + 1) / 2 << " " << 2 - (p + k) % 2;
    else
        cout << -1;

    return 0;
}
