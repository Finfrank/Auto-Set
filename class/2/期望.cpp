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
const int N =1e5+10,mod=1e9+7;
int d[N],p[N];
int main()
{
    int n,m;
    cin>>n>>m;
    d[-1]=1;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        p[a-1]=1;
    }
    if(p[0]==0) d[0]=1;
    for(int i=1;i<n;i++)
    {
        if(p[i]==0)
        {
            d[i]=(d[i-1]+d[i-2])%mod;
        }
    }
    cout<<d[n-1];


}