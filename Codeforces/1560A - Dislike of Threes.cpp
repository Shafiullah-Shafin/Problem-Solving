#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        int cnt = 0;
        for (int i = 1; ; i++) {
            string s = to_string(i);
            reverse(s.begin(), s.end());
            int tot = 0;
            for (int j = 0; j < (int)s.size(); j++) {
                tot += s[j] - '0';
            }
            if (tot % 3 == 0 || s[0] == '3') continue;
            else cnt++;
            if (cnt == k) {
               cout << i << '\n';
               break;
            }
        }
    }
    return 0;
}

