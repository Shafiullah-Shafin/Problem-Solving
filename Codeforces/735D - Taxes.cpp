#include<bits/stdc++.h>
using namespace std;

bool prime (int x) {
    if (x != 2 && x % 2 == 0)
        return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
           return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    if (prime(n))
        cout << 1 << '\n';
    else if (n % 2 == 0)
        cout << 2 << '\n';
    else if (prime(n - 2))
        cout << 2 << '\n';
    else
        cout << 3 << '\n';
    return 0;
}

