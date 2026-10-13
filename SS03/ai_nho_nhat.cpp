//#pragma GCC optimize("O2")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
struct nguoi {
    int d, m, y;
    int id; 
};



bool Kiemtra(nguoi a, nguoi b) {
    if (a.y != b.y) {
        return a.y > b.y; 
    }
    if (a.m != b.m) {
        return a.m > b.m; 
    }
    return a.d > b.d;   
}



int main() {
    nguoi p[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> p[i].d >> p[i].m >> p[i].y;
        p[i].id = i + 1; 
    }
    
    nguoi tre = p[0];
    
    for (int i = 1; i < 3; i++) {
      
        if (Kiemtra(p[i], tre)) {
            tre = p[i];
        }
    }
        cout << tre.id << endl;
    
    return 0;
}

