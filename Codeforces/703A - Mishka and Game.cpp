#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, mis = 0, chr = 0; cin >> n;
    while (n--) {
        int m, c; cin >> m >> c;
        if (m > c) mis++;
        else if (m < c) chr++;
    }
    if (mis > chr) cout << "Mishka" << '\n';
    else if (mis < chr) cout << "Chris" << '\n';
    else cout << "Friendship is magic!^^" << '\n';
    return 0;
}
