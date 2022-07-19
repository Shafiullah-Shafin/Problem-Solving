#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int one = 0, two = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x == 1) one++;
        else two++;
    }
    int permutation[n + 2];
    if (two) {
        permutation[0] = 2;
        two--;
    }
    else {
        permutation[0] = 1;
        one--;
    }
    if (one) {
        permutation[1] = 1;
        one--;
    }
    else {
        permutation[1] = 2;
        two--;
    }
    for (int i = 2; i < n; i++) {
        if (two) {
            permutation[i] = 2;
            two--;
        }
        else {
            permutation[i] = 1;
            one--;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i < n - 1) cout << permutation[i] << ' ';
        else cout << permutation[i] << '\n';
    }
    return 0;
}
