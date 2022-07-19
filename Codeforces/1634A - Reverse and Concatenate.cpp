#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        if (k == 0) {
            cout << 1 << '\n';
            continue;
        }
        string ss = s;
        reverse(s.begin(), s.end());
        if (s + ss == ss + s)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}

