#include<bits/stdc++.h>
using namespace std;

bool dif(int x) {
    int n = x, a, b, c, d, cnt = 0;
    while (n) {
        int rem = n % 10;
        n /= 10;
        cnt++;
        if (cnt == 1) d = rem;
        else if (cnt == 2) c = rem;
        else if (cnt == 3) b = rem;
        else a = rem;
    }
    if (a != b && b != c && c != d && a != c && a != d && b != d) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int y; cin >> y;
    for (int i = 1; ; i++) {
        int x = y + i;
        bool yo = dif(x);
        if (yo) {
            cout << x << '\n';
            break;
        }
    }
    return 0;
}
