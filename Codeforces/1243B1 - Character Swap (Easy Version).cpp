#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, cnt  = 0; cin >> n;
        string s, ss;
        cin >> s >> ss;
        vector<int> v;;
        for (int i = 0; i < n; i++) {
            if (s[i] != ss[i]) {
                v.push_back(i);
                cnt++;
            }
        }
        if (cnt != 2) cout << "NO" << '\n';
        else if (s[v[0]] == s[v[1]] && ss[v[0]] == ss[v[1]])
            cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
