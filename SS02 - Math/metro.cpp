// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long k, t;





signed main()
{
    cin >> k >> t;
    int chieu = (t/k)%2;

    if (t <= k) { cout << t; return 0;}
    if (chieu == 1 && t%k == 0) {cout << k; return 0;}
    if (chieu == 0 && t%k == 0) {cout << 0; return 0;}

    long long vitri = t%k;

    if (chieu == 1) {cout << k - (t%k); return 0;}
    if (chieu == 0) {cout << t%k; return 0;}


    return 0;
}