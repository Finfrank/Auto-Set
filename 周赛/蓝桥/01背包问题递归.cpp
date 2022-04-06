#include <iostream>
#include <cstring>
using namespace std;
int w[105], v[105], n, dp[105][105];
int f(int i, int j)
{
	if (dp[i][j] >= 0)
	{
		return dp[i][j];
	}
	int res;
	if (i == n)
	{
		res = 0;
	}
	else if (j < w[i])
	{
		res = f(i + 1, j);
	}
	else
	{
		res = max(f(i + 1, j), f(i + 1, j - w[i]) + v[i]);
	}
	return dp[i][j] = res; 
}
int main()
{
	int W;
	cin >> n >> W;
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
    for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	cout << f(0, W) << endl;
	return 0;
} 
