#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a, a + n);
    int k = 1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= k) {
            cnt++;
            k++;
        }
    }
    cout << cnt << '\n';
    return 0;
}

