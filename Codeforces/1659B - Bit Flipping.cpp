#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int fr[n] = {0};
        int remain = k;
        for (int i = 0; i < n && remain; i++) {
            if (s[i] == '1') {
                if (k & 1) {
                    fr[i]++;
                    remain--;
                }
            }
            else {
                if (!(k & 1)) {
                    fr[i]++;
                    remain--;
                }
            }
        }
        fr[n - 1] += remain;
        for (int i = 0; i < n; i++) {
            int flip = k - fr[i];
            if (flip & 1) {
                if (s[i] == '0') {
                    cout << '1';
                }
                else {
                    cout << '0';
                }
            }
            else {
                cout << s[i];
            }
        }
        cout << '\n';
        for (auto x : fr) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}
