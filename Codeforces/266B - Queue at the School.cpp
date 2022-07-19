#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, t; cin >> n >> t;
    string s; cin >> s;
    int sz = s.size();
    for (int i = 1; i <= t; i++) {
        for (int j = 1; j < sz; j++) {
            if (s[j - 1] == 'B' && s[j] == 'G') {
                swap(s[j - 1], s[j]);
                j++;
            }
        }
    }
    cout << s << '\n';
    return 0;
}

