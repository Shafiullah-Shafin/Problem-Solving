#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mx = 1e3 + 2;
ll dp[mx + 2][mx + 2][3];
int a[mx + 2];
int n, m;

int solve (ll pos, ll sum, ll taken) {
    if(sum == 0 && taken == 1) return 1;
    if(pos >= n + 1) return sum == 0 && taken;
    if(dp[pos][sum][taken] != -1) return dp[pos][sum][taken];
    return dp[pos][sum][taken] = solve(pos + 1, sum, taken) + solve(pos + 1, (sum + a[pos]) % m, 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset (dp, -1, sizeof dp);
    cin >> n >> m;
    if (n >= m) {
    	cout << "Yes" << '\n';
    	return 0;
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] %= m;
    }
    if (solve (1, 0, 0))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}
