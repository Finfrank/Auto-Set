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
typedef long long ll;
const ll N =1e9+3;
ll w[103],v[103];
vector<ll> f(N,0);
int main()
{
    ll n,W;
    cin>>n>>W;
    for(int i=1;i<=n;i++) cin>>w[i];
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=W;j>=w[i];j--)
        {
            f[j]=max(f[j],f[j-w[i]]+v[i]);
        }
    }
    cout<<f[W]<<endl;
}