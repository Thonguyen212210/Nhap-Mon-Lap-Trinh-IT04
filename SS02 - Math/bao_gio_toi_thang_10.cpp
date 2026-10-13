//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;



signed main()
{
    int n;
    cin >> n;
    
    if (n<=10) cout << 10-n;
    else if (n == 11) cout << 11;
    else if (n==12) cout << 10;

    return 0;
}