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
int main()
{
long long n = 0; scanf("%lld", &n);
if (n % 2 == 0) {
printf("%lld %lld 1", n / 2, (n * n) / 4 + 1); } else {
printf("%lld %lld 2", n, n * n + 4); } return 0;
}