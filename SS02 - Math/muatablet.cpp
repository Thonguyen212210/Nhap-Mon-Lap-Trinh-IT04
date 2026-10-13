//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool songuyen(double n) {
    return ceil(n) == floor(n);
}

signed main()
{
    long long n, dem = 0;
    cin >> n;

    for (long long dai = 1; dai <= n; dai++)
    {
        double rong = sqrt (n*n - dai*dai);
        if (songuyen (rong) && rong != 0)
        {
           // cout << dai << " "<< rong << " "<<endl;
            dem++;
        }
    }

   cout << dem/2;

    
    return 0;
}