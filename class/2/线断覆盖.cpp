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
struct line{
    ll l,r;
    bool operator <(const line& a) const
    {
        return l<a.l;
    }
};
const int N =2e5+10;
int main()
{
    line x[N*3];
    int n;
    cin>>n;
    ll a,b,s=1,y[N];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        x[i].l=a,x[n+i].l=b+1,x[i].r=1,x[i+n].r=-1;
    }
    sort(x,x+n*2);
    for(int i=0;i<=2*n-2;i++)
    {
        y[s]+=x[i+1].l-x[i].l,s+=x[i+1].r;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;



}