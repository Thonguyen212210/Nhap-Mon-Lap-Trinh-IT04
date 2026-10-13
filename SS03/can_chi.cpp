#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void print_can(long long a)
{
    if (a == 1)
        cout << "GIAP";
    else if (a == 2)
        cout << "AT";
    else if (a == 3)
        cout << "BINH";
    else if (a == 4)
        cout << "DINH";
    else if (a == 5)
        cout << "MAU";
    else if (a == 6)
        cout << "KY";
    else if (a == 7)
        cout << "CANH";
    else if (a == 8)
        cout << "TAN";
    else if (a == 9)
        cout << "NHAM";
    else if (a == 10)
        cout << "QUY";
}

void print_chi(long long a)
{
    if (a == 1)
        cout << "THAN";
    else if (a == 2)
        cout << "DAU";
    else if (a == 3)
        cout << "TUAT";
    else if (a == 4)
        cout << "HOI";
    else if (a == 5)
        cout << "TY'";
    else if (a == 6)
        cout << "SUU";
    else if (a == 7)
        cout << "DAN";
    else if (a == 8)
        cout << "MEO";
    else if (a == 9)
        cout << "THIN";
    else if (a == 10)
        cout << "TY.";
    else if (a == 11)
        cout << "NGO";
    else if (a == 12)
        cout << "MUI";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;

    if (cin >> n)
    {
        long long k = n;

        if (n < 0)
        {
            k = n + 1;
        }

        long long can = (k - 4) % 10;
        if (can < 0)
        {
            can += 10;
        }
        can += 1;

        long long chi = k % 12;
        if (chi < 0)
        {
            chi += 12;
        }
        chi += 1;

        print_can(can);
        cout << " ";
        print_chi(chi);
    }

    return 0;
}