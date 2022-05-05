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