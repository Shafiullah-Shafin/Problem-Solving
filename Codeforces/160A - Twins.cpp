#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    vector<int> psum;
    int tot = 0;
    for (auto x : v) {
        tot += x;
        psum.push_back(tot);
    }
    for (int i = 0; i < n; i++) {
        if (psum[i] > psum[n - 1] - psum[i]) {
            cout << i + 1 << '\n';
            break;
        }
    }
    return 0;
}


