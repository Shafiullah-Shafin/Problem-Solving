#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       int a[n + 2];
       for (int i = 1; i <= n; i++) {
           cin >> a[i];
       }
       int step = 0, totA = 0, totB = 0;
       int i = 1, j = n;
       int sumA = 0, sumB = 0;
       bool tt = false;
       while (i <= j) {
          step++;
          if (!tt) {
             sumA = 0;
             while (sumA <= sumB) {
                sumA += a[i];
                i++;
                if (i > j) break;
             }
             tt = true;
             totA += sumA;
          }
          else {
             sumB = 0;
             while (sumB <= sumA) {
                sumB += a[j];
                j--;
                if (i > j) break;
             }
             totB += sumB;
             tt = false;
          }
       }
       cout << step << ' ' << totA << ' ' << totB << '\n';
    }
    return 0;
}

