#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    map<string, int> mp;
    while (n--) {
         string x; cin >> x;
         mp[x]++;
         if (mp[x] == 1)
            cout << "OK" << '\n';
         else
            cout << x << mp[x] - 1 << '\n';
    }
    return 0;
}

