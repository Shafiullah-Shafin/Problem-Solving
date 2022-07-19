#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        deque<int> dq;
        int big, small;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (i == 1) {
                dq.push_back(x);
                big = x;
                small = x;
            }
            else {
                if (x > small) {
                   dq.push_back(x);
                   big = x;
                }
                else {
                   dq.push_front(x);
                   small = x;
                }
            }
        }
        for (auto it = dq.begin(); it != dq.end(); it++) {
            cout << (*it) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
