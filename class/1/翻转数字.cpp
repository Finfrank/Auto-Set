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
void re(int &m)
{
        if(m==68) m=89;
        else if(m==86) m=98;
        else if(m==89) m=68;
        else if(m==98) m=86;
        else if(m==66) m=99;
        else if(m==99) m=66;
        else if(m==90) m=6;
        else if(m==60) m=9;
        else if(m==6) m=90;
        else if(m==9) m=60; 
        else if(m==16) m=91;
        else if(m==61) m=19;
        else if(m==19) m=61;
        else if(m==91) m=16;
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
        re(m[i]);
    }
    int p1;
    if(m[0]>m[1])
    p1=distance(p.begin(),find(p.begin(),p.end(),m[n-1]))-1;
    else
    p1=distance(p.begin(),find(p.begin(),p.end(),m[n-1]))+1;
    re(p[p1]);
    if(p[p1]<10) cout<<"0";
    cout<<p[p1];


    



    
    
    


    





}