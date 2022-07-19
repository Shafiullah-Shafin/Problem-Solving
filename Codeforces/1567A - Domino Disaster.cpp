#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') s[i] = 'D';
            else if (s[i] == 'D') s[i] = 'U';
        }
        cout << s << '\n';
    }
    return 0;
}
