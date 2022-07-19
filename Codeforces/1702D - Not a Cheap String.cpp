#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; int k;
        cin >> s >> k;
        vector<int> v[28];
        int sum = 0, sz = s.size();
        for (int i = 0; i < sz; i++) {
            int ch = s[i] - 'a' + 1;
            sum += ch;
            v[ch].push_back(i);
        }
        map<int, int> mp;
        for (int i = 26; i >= 1; i--) {
            if (sum <= k) break;
            for (auto ind : v[i]) {
                mp[ind] = 1;
                sum -= i;
                if (sum <= k) break;
            }
        }
        for (int i = 0; i < sz; i++) {
            if (!mp[i]) cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}
