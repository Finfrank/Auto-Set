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
int a[110],b[110],c[110];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    int p=*max_element(a,a+n);
    int q=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        c[q++]=i+1;
    }
    int z=0;
    for(int i=0;i<k;i++) 
    {
        cin>>b[i];
        for(int j=0;j<q;j++)
        {
            if(b[i]==c[j])
            z=1;
        }
    }
    if(z) cout<<"Yes";
    else cout<<"No";


}