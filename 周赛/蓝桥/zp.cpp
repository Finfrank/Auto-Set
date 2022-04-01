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
int n,m,sum;
int main()
{

    scanf("%d%d",&n,&m);
    string a="";
    string b="0";
    for(int i=0;i<m;i++)
    a=a+b;
    while(n--)
    {
        string s;
        cin>>s;
        int p=0;
        while(p<n)
        {
            int o=0;
            for(int i=p;i<p+m;i++)
            if(s[i]=='1')  o=1;
            p++;
        }
    }
    int x;scanf("%d",&x);
    printf("%d\n",sum);
}