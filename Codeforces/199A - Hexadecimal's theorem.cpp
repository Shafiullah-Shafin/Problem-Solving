#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[48];
    a[0] = 0, a[1] = 1;
    for (int i = 2; i <= 45; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    int n; cin >> n;
    bool yo = false;
    for (int i = 0; i <= 45 & !yo; i++) {
        for (int j = 0; j <= 45 & !yo; j++) {
            for (int k = 0; k <= 45 && !yo; k++) {
                if (a[i] + a[j] + a[k] == n) {
                    yo = true;
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << '\n';
                }
            }
        }
    }
    if (!yo) cout << "I'm too stupid to solve this problem" << '\n';
    return 0;
}





