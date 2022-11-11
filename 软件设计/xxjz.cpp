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
struct matrix
{
    int a;
    int b;
    int data;
}num[12510];
int main()
{
    int mat[300][300]={0},n,m,q=0;
    int f[200]={0};
    int pp[200]={0};
    int col;
    pp[1]=1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            if(a){
                num[q].a=i;
                num[q].b=j;
                num[q].data=a;
                q++;
                f[j]++;
                for(col=1;col<m;col++) pp[col]=pp[col-1]+f[col-1];
            }
        }
    }
    for(int i=0;i<q;i++) swap(num[i].a,num[i].b);
    for(int i=0;i<q;i++) mat[num[i].a][num[i].b]=num[i].data;
    for(int i=0;i<m;i++)cout<<f[i]<<" ";
    cout<<endl;
    for(int i=0;i<m;i++)cout<<pp[i]+1<<" ";
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}
