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
typedef unsigned long long ull;
const int N=50010;
//STL超时
/*int main()
{
    int n,q ;
    scanf("%d%d",&n,&q);
    int a[50010];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    while(q--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        printf("%d\n",*max_element(a+l-1,a+r)-*min_element(a+l-1,a+r));
        O(mn)的时间复杂度
    }
}*/
//ST表
int n,q,a[N];
int mx[N][18],mn[N][18];
void init()
{
    int m=floor(log((double)n)/log(2.0));
    for(int i=1;i<=n;i++) mx[i][0]=mn[i][0]=a[i];
    for(int i=1;i<=m;i++)
    {
        for(int j=n;j;j--)
        {
            mx[j][i]=mx[j][i-1];
            mn[j][i]=mn[j][i-1];
            if(j+(1<<(i-1))<=n)
            {
                mx[j][i]=max(mx[j][i],mx[j+(1<<(i-1))][i-1]);
                mn[j][i]=min(mn[j][i],mn[j+(1<<(i-1))][i-1]);
            }
        }
    }
}
int cx(int l,int r)
{
    int m=floor(log((double)(r-l+1))/log(2.0));
    int MAX=max(mx[l][m],mx[r-(1<<m)+1][m]);
    int MIN=min(mn[l][m],mn[r-(1<<m)+1][m]);
    return MAX-MIN;
}
int main(){
	    scanf("%d%d",&n,&q);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		init();
		while(q--)
        {
			int l,r;
			scanf("%d%d",&l,&r);
			printf("%d\n",cx(l,r));
		}
}