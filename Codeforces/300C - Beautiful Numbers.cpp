#include<bits/stdc++.h>
using namespace std;

long long fact[1000006];
const int mod = 1e9 + 7;

bool check (long long sum, int a, int b) {
	while (sum) {
		int digit = sum % 10;
		if (digit != a && digit != b)
			return false;
		sum /= 10;
	}
	return true;
}

long long BigMod (long long a, long long b) {
    if (b == 1) return a % mod;
    if (b % 2 == 0) {
       long long x = BigMod (a, b / 2);
       return (x * x) % mod;
    }
    else {
       long long x = BigMod (a, b / 2);
       return (x * x) % mod * a % mod;
    }
}

long long ncr (long long n, long long r) {
	long long ret = fact[n];
	ret = (ret * BigMod (fact[r], mod - 2)) % mod;
	ret = (ret * BigMod (fact[n-r], mod - 2)) % mod;
	return ret;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a, b, n; cin >> a >> b >> n;
	long long sum, ans = 0;
	fact[0] = 1;
    for (int i = 1; i <= n; i++) {
		fact[i] = (fact[i-1] * i) % mod;
    }
	for (int x = 0; x <= n; x++) {
		int y = n - x;
		sum = a * x + b * y;
		if (!check (sum, a, b))
			continue;
		ans = (ans + ncr(n, x)) % mod;
	}
	cout << ans << '\n';
	return 0;
}

