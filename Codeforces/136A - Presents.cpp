#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mp[x] = i;
    }
    for (auto x : mp) {
        cout << x.second << ' ';
    }
    cout << '\n';
    return 0;
}



