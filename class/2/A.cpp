#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, mod = 1e9 + 7;
int n, m;
bool st[N];
int dp[N];

int main() {
	scanf("%d %d", &n, &m);
	int x;
	for (int i = 1; i <= m; i++) {
		scanf("%d", &x);
		st[x] = true;
	}
	dp[0] = 1;
	if (!st[1])
		dp[1] = 1;

	for (int i = 2; i <= n; i++)
		if (!st[i])
			dp[i] = (long long)(dp[i - 1] + dp[i - 2]) % mod;

	printf("%d", dp[n]);
	return 0;
}
