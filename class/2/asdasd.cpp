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
const int N=1e6+7;
// int n , k ;
// int a[N] ;
// int main()
// {
//     cin >> n >> k ;
//     for(int i = 1 ; i <= n ; i ++) scanf("%d",a + i) ;
    
//     int res = 0 ;
//     multiset<int> q ;
//     for(int i = 1 , j = 1 ; i <= n ; i ++)
//     {
//         q.insert(a[i]) ;
//         while(q.size() && *--q.end() - *q.begin() > k && j <= n) 
//         {
//             q.erase(q.find(a[j ++])) ;
//         }
//         res=max(res,q.size());
//     }
//     cout<<res;
// }
int main()
{
    int n,k,s=0;
    multiset<int> p;
    cin>>n>>k;
    int a[N];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1,j=1;i<=n;i++)
    {
        p.insert(a[i]);
        while(j<=n&&*(--p.end())-*p.begin()>k&&p.size()!=0) p.erase(p.find(a[j++]));
        s=max(s,((int)p.size()));
    }
    cout<<s;

    

}