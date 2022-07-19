#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    map<int, int> mp;
    int mx = -1;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mp[x]++;
        mx = max (mx, mp[x]);
    }
    cout << mx << '\n';
    return 0;
}


