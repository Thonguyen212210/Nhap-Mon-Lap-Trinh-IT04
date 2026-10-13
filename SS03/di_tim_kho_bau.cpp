#include <bits/stdc++.h>
#define endl '\n'

using namespace std;


signed main()
{
    long long v1,v2,w1,w2,M, kq = 0;
    cin >> v1 >> w1 >> v2 >> w2 >> M;

    if (w1+w2 <= M) kq = v1+v2;
    else 
    {
        if (w1 <= M && w2 <= M) kq = max(v1,v2);
        else if (w1 <= M && w2 > M) kq = v1;
        else if (w1 > M && w2 <= M) kq = v2;
    }
    
    cout << kq;

    return 0;
}