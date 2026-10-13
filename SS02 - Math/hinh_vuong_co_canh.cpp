//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;



signed main()
{
   long long xA, yA, xB, yB;
    
    cin >> xA >> yA >> xB >> yB;

    long long dx = xB - xA;
        long long dy = yB - yA;
        
        long long x1_1 = xA - dy;
        long long y1_1 = yA + dx;
        long long x1_2 = xB - dy;
        long long y1_2 = yB + dx;
        
        long long x2_1 = xB + dy;
        long long y2_1 = yB - dx;
        long long x2_2 = xA + dy;
        long long y2_2 = yA - dx;
        
        cout << "(" << xA << ", " << yA << ") "
             << "(" << x1_1 << ", " << y1_1 << ") "
             << "(" << x1_2 << ", " << y1_2 << ") "
             << "(" << xB << ", " << yB << ")\n";
             
        cout << "(" << xA << ", " << yA << ") "
             << "(" << xB << ", " << yB << ") "
             << "(" << x2_1 << ", " << y2_1 << ") "
             << "(" << x2_2 << ", " << y2_2 << ")\n";
    
    return 0;
}