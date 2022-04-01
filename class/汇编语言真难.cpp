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
const int N =1e5+10;
int a[N],s[N],n,t;
void ins(int l,int r,int x)
{
    s[l]+=x;
    s[r+1]-=x;
}
int main()
{
    cin>>n>>t;
    for(int i=1;i<=n;i++) scanf("%d",a+i);
    int m,l,r,x;
    while(t--)
    {
        scanf("%d",&m);
        if(m==1)
        {
            scanf("%d%d%d",&l,&r,&x);
            ins(l,r,x);
        }
        else if(m==2)
        {
            scanf("%d%d%d",&l,&r,&x);
            ins(l,r,-x);
        }
        else
        {
            scanf("%d",&x);
            a[x]-=s[x+1];
            a[x+1]+=s[x];
            swap(a[x],a[x+1]);
            swap(s[x],s[x+1]);
        }
    }
    for(int i=1;i<=n;i++) s[i]+=s[i-1];
    for(int i=1;i<=n;i++) cout<<a[i]+s[i]<<' ';
    return 0;


}