#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
#include<iomanip>
#include<cstring>
#include<list>
#include<queue>
#include<map>
#include<set>
using namespace std;
long long a[505][505];

int main() {
	int n;
	long long p;
	bool key = 0;
	long long ans = 1;
	cin >> n >> p;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			a[i][j] = a[i][j] % p;
		}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int x = i;
			int y = j;
			while (a[y][i]) {
				long long t = a[x][i] / a[y][i];
				for (int k = 1; k <= n; k++)
					a[x][k] = (a[x][k] - t * a[y][k]) % p;
				swap(x, y);
			}
			if (x != i) {
				key ^= 1;
				for (int k = 1; k <= n; k++)
					swap(a[i][k], a[x][k]);
			}
		}
		ans *= a[i][i];
	}
	if (key)
		ans = ans * (-1);
	ans = ans % p;
	ans += p;
	ans = ans % p;
	cout << ans << endl;
	return 0;
}