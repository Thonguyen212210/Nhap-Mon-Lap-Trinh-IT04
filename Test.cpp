#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> dp(m + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++){
        int ai = a[i];
        if (ai > m) continue; 
        for (int j = m; j >= ai; j--){
            dp[j] = (dp[j] + dp[j - ai]) % MOD;
        }
    }

    long long ans = 0;
    for (int j = 0; j <= m; j++){
        ans = (ans + dp[j]) % MOD;
    }

    cout << ans << endl;
    return 0;
}