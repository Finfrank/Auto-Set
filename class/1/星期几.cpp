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
int y[13]={31,28,31,30,31,30,31,31,30,31,30,31},m[10];
int run(int i)
{
    if(i%400==0||(i%100&&i%4==0)) return 1;
    return 0;
}
int main()
{
    int n,q=0;
    cin>>n;
    for(int i=1900;i<=1899+n;i++)
    {
        int s=0;
        if(run(i))
        {
            y[1]++;
            s=1;
        } 
        for(int j=0;j<12;j++)
        {
            for(int p=1;p<=y[j];p++)
            {
                q++;
                if(q>7) q-=7;
                if(p==13) m[q]++;
            }
        }
        if(s) y[1]--;
    }
    for(int i=1;i<=7;i++) cout<<m[i]<<' ';

}