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
typedef unsigned long long ll;
const int mod=1e4;
struct mat
{
    ll a[15][15];
    mat(){
        memset(a,0,sizeof a);
    }
};
ll ksm(ll a,ll b,ll c){
    ll p=1;
    if(b<=0) return 0;
    while(b>0)
    {
        if(b&1) p=(p+a)%c;
        a=a*a%c ;
        b>>=1;
    }
    return p;
}
mat jzksm(mat x,mat y)
{
    mat res;
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    for(int k=0;k<2;k++)
    res.a[i][j]=(res.a[i][j]+x.a[i][k]*y.a[k][j])%mod;
    return res;
}
ll ppow(ll a)
{
    mat b,r;
    for(int i=0;i<2;i++)
    r.a[i][i]=1;
    b.a[0][0] = b.a[0][1] =b.a[1][0]=1;
    b.a[1][1]= 0;
    while(a>0)
    {
        if(a&1) r=jzksm(r,b);
        b=jzksm(b,b);
        a>>=1;
    }
    return r.a[0][1];
}
int main()
{
    ll n;
    while(~scanf("%lld",&n)&&n!=-1)
    {
        cout<<ppow(n)<<endl;
    }
    
}