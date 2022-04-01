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
struct mf
{
    int a;
    int d;
    int c;
};
bool cmp(mf q,mf w)
{
    return q.d>w.d;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int m,b;
        mf mff[103];
        cin>>m>>b;
        for(int i=0;i<b;i++)
        {
            cin>>mff[i].a>>mff[i].d>>mff[i].c;
        }
        sort(mff,mff+b,cmp);
        int sum=0;
        int i=0;
        while(m>0)
        {
            while(m<mff[i].a)
            {
                m-=mff[i].a;
                sum+=mff[i].d;
                mff[i].c--;
            }
            i++;
        }
        cout<<sum<<endl;
    }
}