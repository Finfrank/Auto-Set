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
    while(cin>>n)
    {
        int p=0,cnt=0;
        while(n)
        {
            if(n&1) cnt++;
            p++;
            n>>=1;
        }
        cout<<cnt+p-2<<endl;
    }
}