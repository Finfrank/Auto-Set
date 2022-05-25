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
int gcd(int a,int b)
{
    return a%b?gcd(b,a%b):b;
}
int is_prime(int n)
{
    if(n<=1) return 0;
    int m=floor(sqrt(n)+0.5);
    for(int i=2;i<=m;i++)
    if(n%i==0) return 0;
    return 1;
}
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
int main()
{
    ll a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e)
    {
        ll x=c-d;
        ll y=e;
        ll q=b-a;
        if(x<0)
        {
            x=-x,q=-q;
        }
        ll g=gcdd(x,y,a,b);
        if(q%g) cout<<"Impossible"<<endl;
        else{
            a=a*q/g;
            ll o=y/g;
            if(a>=0) a=a%o;
            else a=a%o+o;
            cout<<a<<endl;
        }
        
    }


}