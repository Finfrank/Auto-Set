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
const int N =1e5+7;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,rp=0,sy=0;
        cin>>x;
        while(x--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a>0)
            {
                if(rp<=b) sy+=c,rp+=abs(a);
            }
            if(a<0)
            {
                if(rp>=b) sy+=c,rp+=a;
            }
            
        }
    }
}