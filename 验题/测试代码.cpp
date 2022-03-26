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
int main()
{
int n,m;
scanf("%d%d",&n,&m); //注意!! 批量生成答案的时候输入不可以用 cin !! 
//如果必须使用的话，则不能批量生成，需要手动一个个生成
int num[105],vis[105];
char mp[105][55];
memset(num,0,sizeof num);
memset(vis,0,sizeof vis);
for(int i=1;i<=m;i++)
{
    scanf("%s",mp[i]+1);
    for(int j=1;j<=n;j++)
    for(int k=j+1;k<=n;k++)
    if(mp[i][j]>mp[i][k]) num[i]++;
    vis[i]=num[i];
}
sort(num+1,num+m+1);
for(int i=1;i<=m;i++)
{
    for(int j=1;j<=m;j++)
    if(vis[j]==num[i])
    cout<<mp[j]+1<<endl,vis[j]=-1;
}
}
