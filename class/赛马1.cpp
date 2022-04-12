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
int main()
{
    int n;
    while(cin>>n&&n)
    {
        int yz[1010],ds[1010],ans=0;
        for(int i=0;i<n;i++) cin>>yz[i];
        for(int i=0;i<n;i++) cin>>ds[i];
        sort(yz,yz+n);
        sort(ds,ds+n);
        int win=n/2+1;
        int ss=n-win,pp=win-1;
        for(int i=0;i<=pp;i++,ss++)
        {
            if(yz[ss]>ds[i]) ans++;
        }
        if(ans==win) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}