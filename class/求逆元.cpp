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
ll gcdd(ll a ,ll b,ll &c,ll &d)
{
    if(!b)
    {
        c=1,d=0;
        return a;
    }
    ll q=gcdd(b,a%b,d,c);
    d=d-a/b*c;
    return q;
}
ll solve(int a,int mod)
{
    ll q,w;
    ll c=gcdd(a,mod,q,w);
    return (q%mod+mod)%mod;
}
int main()
{
    int n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<solve(x,1e9+7)<<endl;
    }
    
}
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll extendgcd(ll a,ll b,ll &x,ll &y)
// {
// 	if (b==0)
// 	{
// 		x=1, y=0;
// 		return a;
// 	}
// 	ll t=extendgcd(b, a % b, y, x);
// 	y = y-a/b*x;
// 	return t;
// }
// ll fun(int a,int mod)
// {
// 	ll x, y;
// 	ll d=extendgcd(a,mod,x,y);
// 	return (x%mod+mod)%mod;
// }
// int main()
// {
//     int T,x,y;
//     cin>>T;
//     while(T--)
//     {
//         cin>>x;
//         y=fun(x,1e9+7);
//         cout<<y<<endl;
//     }
// }
