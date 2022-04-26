#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <cassert>
#include <ctime>
#include <map>
#include <set>
using namespace std;
int n,t;
struct Node{
    int x,y;
}nod[103];
int main()
{
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d%d",&nod[i].x,&nod[i].y);
        double ans=0;
        for(int i=1;i<n;i++)ans+=(nod[i-1].y+nod[i].y)*(nod[i].x-nod[i-1].x)/2.0;
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
}