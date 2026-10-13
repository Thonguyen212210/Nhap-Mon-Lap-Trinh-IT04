
//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define task "test"
#define endl "\n"

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

long long nhap()
{
    long long n;
    do
    {
        cout  << "Nhap mot so nguyen duong"; 
        cin >> n;
    } while (n<0);

    return n;
}

signed main()
{
    file();
    
    long long a = nhap();
    cout << "So vua nhap la "<< a<< endl;
    cout << "Tong hai so la "<< a + nhap()<< endl;
    
    return 0;
}