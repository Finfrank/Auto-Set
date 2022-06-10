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
int main()
{
    int n,a[10],p,s;
    char x[10],y[10];
    cin>>n;
    while(n--)
    {
        s=0;
        for(int i=0;i<=9;i++) a[i]=1;
        cin>>x>>y;
        for(int i=0;x[i];i++)
        {
            if(isdigit(x[i])) a[x[i]-'0']=0;
        }
        for(int i=0;y[i];i++)
        {
            if(isdigit(y[i])) a[y[i]-'0']=0;
        }
        for(int i=0;i<=9;i++) s+=a[i];
        if(a[0]) cout<<s*s*s+a[1]<<endl;
        else cout<<s*s*s+s*s+s<<endl;
    }
    

}
