#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        set<char> se;
        int cnt = 1;
        for (auto x : s) {
            se.insert(x);
            if ((int)se.size()> 3) {
               cnt++;
               se.clear();
               se.insert(x);
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
