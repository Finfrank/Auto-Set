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
int sum[200008];
int main()
{
    int n;
    int maxx=-1;
    string s;
    cin>>n>>s;
    int p=1;
    sum[1]=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]>=s[i-1])
        sum[p]++;
        else sum[++p]=1;
    }
    for(int i=1;i<=p;i++)
    {
        maxx=max(maxx,sum[i]+sum[i-1]);
    }
    cout<<maxx;

}