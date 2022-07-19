#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, res; cin >> n;
    int one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 4)
            four++;
        else if (x == 3)
            three++;
        else if (x == 2)
            two++;
        else
            one++;
    }
    res = four;
    res += two / 2;
    if (three)
        res += min(three, one);
    if (three > one) {
        if (two % 2 != 0) {
            res += three - one;
            res++;
        }
        else {
            res += three - one;
        }
    }
    else {
        int rem1 = one - three;
        if (two % 2 != 0) {
            rem1 -= 2;
            res++;
            if (rem1 > 0)
                res += (rem1 % 4 == 0) ? (rem1 / 4) : (rem1 / 4 + 1);
         }
        else {
             res += (rem1 % 4 == 0) ? (rem1 / 4) : (rem1 / 4 + 1);
        }
    }
    cout << res << '\n';
    return 0;
}
