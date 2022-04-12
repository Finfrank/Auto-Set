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
const int maxn=103;
int f[maxn],n,m;
int Find(int x)
{
    if(f[x]==x)
    return f[x];
    else return Find(f[x]);
}
void init()
{
    for(int i=1;i<=n;i++) f[i]=i;
}
int main()
{
    cin>>n>>m;
    init();
    for(int j=0;j<n-1;j++)
    {
        int u,v;
        cin>>u>>v;
        v=Find(u);
    }
    while(m--)
    {
        int q,x,c;
        cin>>q;
        if(q==1)
        {
            cin>>x>>c;
            f[x]=c;
        }
        if(q==2)
        {
            cin>>x;
            if(f[x]!=x){
            cout<<f[x]<<endl;}
            else cout<<-1<<endl;
        }
    }
    
}