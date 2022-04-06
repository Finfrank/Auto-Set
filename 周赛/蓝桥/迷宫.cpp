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
char a[1011][1011];
int qu[1000111],pre[1000111],ans[1000111];
int n,m;
bool vis[1011][1011];
int ch(int x,int y)
{
	if(x>n||x<1||y>m||y<1)return 0;
	if(vis[x][y]||a[x][y]=='1')return 0;
	return 1;
}
void out(int dis)
{
	if(dis==1)
	  return ;
	out(pre[dis]);
	putchar(ans[dis]);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i]+1;
	int h=0,t=1;
	qu[1]=1;vis[1][1]=1;
	while(h!=t)
	{
		h++;
		int x=(qu[h]-1)/m+1,y=(qu[h]-1)%m+1;
		if(ch(x+1,y)){vis[x+1][y]=1;qu[++t]=x*m+y;pre[t]=h;ans[t]='D';if(x+1==n&&y==m)break;}
		if(ch(x,y-1)){vis[x][y-1]=1;qu[++t]=(x-1)*m+y-1;pre[t]=h;ans[t]='L';if(x==n&&y-1==m)break;}
		if(ch(x,y+1)){vis[x][y+1]=1;qu[++t]=(x-1)*m+y+1;pre[t]=h;ans[t]='R';if(x==n&&y+1==m)break;}
		if(ch(x-1,y)){vis[x-1][y]=1;qu[++t]=(x-2)*m+y;pre[t]=h;ans[t]='U';if(x-1==n&&y==m)break;}
	}
	out(t);
}