// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void printer(long long a)
{
    if (a == 1)
        cout << "TY'";
    else if (a == 2)
        cout << "SUU";
    else if (a == 3)
        cout << "DAN";
    else if (a == 4)
        cout << "MEO";
    else if (a == 5)
        cout << "THIN";
    else if (a == 6)
        cout << "TY.";
    else if (a == 7)
        cout << "NGO";
    else if (a == 8)
        cout << "MUI";
    else if (a == 9)
        cout << "THAN";
    else if (a == 10)
        cout << "DAU";
    else if (a == 11)
        cout << "TUAT";
    else if (a == 12)
        cout << "HOI";
}

signed main()
{
    long long year;

    if (cin >> year)
    {
        long long k = year;

        if (year < 0)
        {
            k = year + 1;
        }

        long long r = (k - 1996) % 12;

        if (r < 0)
        {
            r += 12;
        }

        printer(r + 1);
    }

    return 0;
}