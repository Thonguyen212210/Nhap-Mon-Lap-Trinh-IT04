// #pragma GCC optimize("O2")
// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    set<string> tmp = {s1, s2, s3};

    if ((tmp.count("mắc") && tmp.count("rẻ")) || (tmp.count("nhanh") && tmp.count("chậm")) || (tmp.count("tốt") && tmp.count("tệ")))
    {
        cout << "NO" << endl;
        return 0;
    }

    
    int positive_count = 0;
        if (tmp.count("rẻ"))
            positive_count++;
        if (tmp.count("tốt"))
            positive_count++;
        if (tmp.count("nhanh"))
            positive_count++;

        if (positive_count >= 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    

    return 0;
}