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
int n, ans = (1 << 30);
int cnt[10][10];
string str[10];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>str[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        cnt[str[i][j]-'0'][j]++;
    }
    for(int i=0;i<10;i++)
    {
        int res=0;
        for(int j=0;j<10;j++)
        {
            res = max(res,10*(cnt[i][j]-1)+j);
        }
        ans=min(ans,res);
    }
    cout<<ans;



}