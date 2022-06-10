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
int ss,n,m,c;
int x[110],a[110];
int s[110][110],d[110][110],dp[107][10007];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
        a[i]=a[i-1]+x[i];
        for(int j=1;j<=x[i];j++)
        {
            cin>>c;
            s[i][j]=s[i][j-1]+c;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x[i];j++)
        {
            for(int k=0;k<=j;k++)
            {
                 d[i][j]=max(d[i][j],s[i][k]+s[i][x[i]]-s[i][x[i]-(j-k)]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=a[i];j++)
        {
            for(int k=0;k<=min(j,x[i]);k++)
            {
                dp[i][j]=max(dp[i-1][j-k]+d[i][k],dp[i][j]);
            }
        }
    }
    cout<<dp[n][m]<<endl;
}