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
ll exgcd(ll a ,ll b,ll &c,ll &d)
{
    if(!b)
    {
        c=1,d=0;
        return a;
    }
    ll q=exgcd(b,a%b,d,c);
    d=d-a/b*c;
    return q;
}
int main()
{
    ll a,b,c,d,e;
    while(cin>>a>>b>>c>>d>>e)
    {
        ll x=c-d,y=e,q=b-a;
        if(x<0) x=-x,q=-q;
        ll g=exgcd(x,y,a,b);
        if(q%g!=0) cout<<"Impossible"<<endl;
        else{
            a=a*q/g;
            ll o=y/g;
            if(a>=0) a%=o;
            else a=a%o+o;
            cout<<a<<endl;
        }
        
    }


}