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
int f[801][801];
    int n,s=0;
    int ans=0;
    int a[1003],mp[1003];
int judge(int a,int b,int c)
{
    if(a+b>c&&b+c>a&&a+c>b) return 1;
    return 0;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[a[i]]-=1,mp[a[j]]-=1;
            int r=a[i]+a[j];
            int l=a[j]-a[i];
            while(l<r)
            {
                if(mp[l]!=0&&l!=r) 
                {
                    ans++;
                }
                l++;
            }
        }
    }
    cout<<ans;



}