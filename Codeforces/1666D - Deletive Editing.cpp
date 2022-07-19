#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        string ss, s; cin >> ss >> s;
        map<char, int> mp;
        for (int i = 0; i < (int)s.size(); i++) {
            mp[s[i]]++;
        }
        int sz = ss.size();
        int k = s.size() - 1;
        for (int i = sz - 1; i >= 0 && k >= 0; i--) {
            if (s[k] == ss[i]) {
                k--;
                mp[ss[i]]--;
            }
            else if (mp[ss[i]] > 0) {
                 break;
            }
        }
        if (k < 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}

