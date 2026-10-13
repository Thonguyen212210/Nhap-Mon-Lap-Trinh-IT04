//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;



signed main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    long long kc1 = abs(a-c);
    long long kc2 = abs(b-c);

    if (kc1 == kc2)  cout << "C";
    else if (kc1 < kc2) cout << "A";
    else cout << "B";

    return 0;
}