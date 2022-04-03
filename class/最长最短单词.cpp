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
const int maxn=1e6+5;
int main()
{
    char s[10000];
    int sum=0,maxx=0,minn=1000;
    int maxp,minp;
    gets(s);
    int l=strlen(s);
    s[l]=' ';
    for(int i=0;i<l;i++)
    {
        if(s[i]!=' '&&s[i]!=',')
        sum++;
        else if(sum>0)
        {
            if(sum>maxx)
            {
                maxx=sum;
                maxp=i-sum;
            }
            if(sum<minn)
            {
                minn=sum;
                minp=i-sum;
            }
            sum=0;
        }
    }
    for(int i=maxp;i<=maxp+maxx-1;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    for(int i=minp;i<=minp+minn-1;i++)
    {
        cout<<s[i];
    }

}