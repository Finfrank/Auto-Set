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
int is_prime(int n)
{
    if(n<=1) return 0;
    int m=floor(sqrt(n)+0.5);
    for(int i=2;i<=m;i++)
    if(n%i==0) return 0;
    return 1;
}
int main()
{
    int a ;
    cin>>a;
    if(a>81||(is_prime(a)&&a>10)) cout<<"No";
    else cout<<"Yes";
}