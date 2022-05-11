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
const int maxn=2e6+10;
long long a[maxn],s[maxn],q[maxn],p[maxn];
int sd,maxx=-1;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<*max_element(a+x,a+y+1)<<endl;
    }

}