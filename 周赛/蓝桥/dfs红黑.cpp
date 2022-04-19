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
const int N=603;
char g[N][N];
int n,cnt,ans,ans2,cnt2,pp1,pp2;
int vis[N][N],vis2[N][N];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool in(int x,int y){
    return 0<=x&&x<n&&0<=y&&y<n;
}
void dfs(int x,int y,int cnt)
{
    if(cnt>=ans) return ;
    if(g[x][y]=='G')
    {
        ans=cnt ;
        return ;
    }
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int a=x+dx[i],b=y+dy[i];
        if(in(a,b)&&g[a][b]!='#'&&!vis[a][b]) 
        {
        dfs(a,b,cnt+1);
        }
    }
    vis[x][y]=0;
}
void dfs2(int x,int y,int cnt2)
{
    if(cnt2>=ans2) return ;
    if(g[x][y]=='E')
    {
        ans2=cnt2 ;
        return ;
    }
    vis2[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int a=x+dx[i],b=y+dy[i];
        if(in(a,b)&&g[a][b]!='#'&&!vis2[a][b])
        {
        dfs(a,b,cnt2+1);
        }
    }
    vis2[x][y]=0;
}
int main()
{
    int q;
    cin>>q ;
    while(q--){
    while(cin>>n)
    {
        cnt=0,cnt2=0,ans=100000,ans2=100000;
        for(int i=0;i<n;i++)cin>>g[i];//TODO二维数组读入/按行读
        int x,y;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]=='Z')
                {
                    x=i,y=j;
                }
            }
        }
        dfs(x,y,0);
        dfs2(pp1,pp2,0);
        cout<<ans+ans2<<endl;
    }}


}