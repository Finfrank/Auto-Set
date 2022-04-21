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
typedef unsigned long long ll;
ll ksm(ll x, ll n) {
    ll p=1;
    while(n) 
    {
        if(n&1) p=p*x%10009;
        x=x*x%10009;
        n>>=1;
    }
    return p;
}
int main()
{
    ll n;
    cin>>n;
    if(n%2==0&&(n*n+4)%4==0)
    cout<<n/2<<' '<<(n*n+4)/4<<' '<<1;
    else
    cout<<n<<' '<<n*n+4<<' '<<2;
}