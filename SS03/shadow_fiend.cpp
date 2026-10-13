// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);
    long long x, y, n, m;
    cin >> x >> y >> n >> m;

    long long cnt = 0;

    for (long long i = 1; i <= n; ++i)
    {
        long long tmp = ceil((double)m / x);
        cnt += tmp;
        x += y;
    }

    cout << cnt << endl;

    return 0;
}