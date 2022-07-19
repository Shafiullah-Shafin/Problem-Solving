#include<bits/stdc++.h>
using namespace std;

bool square (int n) {
     int x = sqrt(n);
     return x * x == n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
          int n; cin >> n;
          if (n % 2 == 0 && square(n / 2))
             cout << "YES" << '\n';
          else if (n % 4 == 0 && square(n / 4))
             cout << "YES" << '\n';
          else
             cout << "NO" << '\n';
    }
    return 0;
}
