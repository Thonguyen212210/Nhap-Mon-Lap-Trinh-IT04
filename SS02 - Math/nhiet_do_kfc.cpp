//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

signed main()
{
    double f,c,k;
    cin >> f;
    f -= 32;
    c = f/1.8;

    cout << c <<" "<< c+273.15;
    return 0;
}