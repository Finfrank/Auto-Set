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
#define ll long long
const int N=1e6+10;
int o;
vector<int> q[N];
double dp[N],v[N];
double dfs(int a)
{
    double s=v[a]*dp[a];
    for(auto i:q[a])
    {
        s+=dfs(i)*(1.0-v[a]);
    }
    return s;
}
void xh(int a)
{
    for(auto i:q[a])
    {
        xh(i);
        dp[a]+=dp[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int w=0;
    int x;
    double y,z;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        if(!x) o=i;
        else q[x].push_back(i);
        v[i]=z,dp[i]=y;
    }
    xh(o);
    cout<<fixed<<setprecision(4)<<dfs(o);



}