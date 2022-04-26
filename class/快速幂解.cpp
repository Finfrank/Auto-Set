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
const int N=0x3f3f3f;
int ksm(int a,int b,int c)
{
    int p=1;
    if(b<=0) return 0;
    while(b>0)
    {
        if(b&1) p=(p*a)%c ;
        a=(a*a)%c;
        b>>=1;
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    cout<<(n*ksm(2,n,10009))%10009;
}