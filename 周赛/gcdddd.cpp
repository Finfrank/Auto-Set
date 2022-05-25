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
#define ll unsigned long long
const ll mod =1e9+7;
ll gcd(ll m,ll n)
{
    return (m%n)?gcd(n,(m%n)):n;
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
ll a[10010];
int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    ll sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum=lcm(sum,a[i]);
    }
    ll res=0;
    for(int i=0;i<n;i++)
    {
        res+=(sum/a[i])%mod;
    }
    cout<<res;






    
}