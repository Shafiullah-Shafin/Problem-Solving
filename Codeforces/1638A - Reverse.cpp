#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, pos = 0; cin >> n;
    int a[n + 2], b[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    //observation : the permutation's elements are form 1 to n
    for (int i = 1; i <= n; i++) {
        if (a[i] == i) {
            cout << a[i] << ' ';
        }
        else {
            for (int j = i; j <= n; j++) {
                if (a[j] == i) {
                    pos = j;
                    break;
                }
            }
            //observation : i to pos should be reversed
            for (int j = pos; j >= i; j--) {
                cout << a[j] << ' ';
            }
            for (int j = pos + 1; j <= n; j++) {
                cout << a[j] << ' ';
            }
            break;
        }
    }
    cout << '\n';
  }
  return 0;
}

