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
int a[6]={0,1,6,8,9};
int m[maxn];
set<int>q;
vector<int>p;
void nextp()
{
    int i=0;
    do
    {
        q.insert(a[0]*10+a[1]);
    } while (next_permutation(a,a+5));
    q.insert(11),q.insert(66),q.insert(88),q.insert(99);
    p.assign(q.begin(),q.end());
}
// int xl[50]={1,6,8,9 ,10 ,11, 16, 18, 19, 60, 61, 66, 68, 69, 80, 81 ,86 ,88, 89 ,90 ,91 ,96 ,98 ,99};
int main()
{
    nextp();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cin>>m[i];
        if(m[i]==68) m[i]=89;
        else if(m[i]==86) m[i]=98;
        else if(m[i]==89) m[i]=68;
        else if(m[i]==98) m[i]=86;
        else if(m[i]==66) m[i]=99;
        else if(m[i]==99) m[i]=66;
        else if(m[i]==90) m[i]=6;
        else if(m[i]==60) m[i]=9;
    }
    int p1;
    if(a[0]>a[1]&&a[1]>a[2]&&a[2]>a[3])
    p1=distance(p.begin(),find(p.begin(),p.end(),m[n-1]))-1;
    else
    p1=distance(p.begin(),find(p.begin(),p.end(),m[n-1]))+1;
    cout<<p1<<endl;
    cout<<p[p1];


    



    
    
    


    





}