// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void solve(string a, string b)
{
    if (a == "KEO" && b == "KEO")
        cout << "DRAW";
    else if (a == "KEO" && b == "BUA")
        cout << "B WON";
    else if (a == "KEO" && b == "BAO")
        cout << "A WON";
    else if (a == "BUA" && b == "KEO")
        cout << "A WON";
    else if (a == "BUA" && b == "BUA")
        cout << "DRAW";
    else if (a == "BUA" && b == "BAO")
        cout << "B WON";
    else if (a == "BAO" && b == "KEO")
        cout << "B WON";
    else if (a == "BAO" && b == "BUA")
        cout << "A WON";
    else if (a == "BAO" && b == "BAO")
        cout << "DRAW";
}

signed main()
{
    string a_trai, a_phai, b_trai, b_phai, a_rut, b_rut, tmp_a, tmp_b;
    cin >> a_trai >> a_phai >> b_trai >> b_phai >> a_rut >> b_rut;

    if (a_rut == "TRAI")
        tmp_a = a_phai;
    else
        tmp_a = a_trai;

    if (b_rut == "TRAI")
        tmp_b = b_phai;
    else
        tmp_b = b_trai;

    solve(tmp_a, tmp_b);

    return 0;
}