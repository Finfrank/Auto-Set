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
const int maxn = 64;
ll a[maxn],u;
int gcd(int m,int n)
{
    return (m%n)?gcd(n,(m%n)):n;
}
vector<ll> f;
void zys(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n % i==0)
        {
            f.push_back(i);
            while(n%i==0) n/=i;
        }
    }
    if(n>1) f.push_back(n);
}
ll s(ll a)
{
    ll ans=0;
    int size=f.size();
    for(ll i=1;i<(1 << size);i++)
    {
        ll bits=0;
        ll res=1;
        for(int j=0;j<size;j++)
        {
            if(i&(1 << j))
            {
                bits++;
                res*=f[j];
            }
        }
        if(bits&1) ans+= a/res;
        else ans-= a/res;
    }
    return a-ans;
}