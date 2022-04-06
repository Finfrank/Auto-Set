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
const ll maxn=1e4+10;
ll s,n,a[maxn],dp[maxn]={0};
int main()
{
    while(cin>>s>>n)
    {
        for(int i=1;i<=n;i++) cin>>a[i];
        memset(dp,0,sizeof dp);
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=s;j>=a[i];j--)
            {
                if(dp[j-a[i]]) dp[j]=1;
            }
        }
        if(dp[s]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
