//TODO贪心
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
#include<functional>
#include<map>
#include<set>
using namespace std;
#define int long long
typedef long long ll;
const int maxn=2e5+10;
int n,k;
int A[1000050],F[1000050];
int is_prime(int n)
{
    if(n<=1) return 0;
    int m=floor(sqrt(n)+0.5);
    for(int i=2;i<=m;i++)
    if(n%i==0) return 0;
    return 1;
}
int check(int x)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]*F[i]>x) res+=A[i]-(x/F[i]);
    }
    return res<=k;
}
signed main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=n;i++) cin>>F[i];
    sort(A+1,A+n+1);
    sort(F+1,F+n+1,greater<int>());
    int L=0,R=1e18,M;
    while(L<R)
    {
        M=(L+R)>>1;
        if(check(M)) R=M;
        else L=M+1;
    }
    cout<<R;
    return 0;




}