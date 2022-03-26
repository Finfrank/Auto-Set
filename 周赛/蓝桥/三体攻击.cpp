//暴力(过不了 三维差分前缀和)
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
const int N =1e5+8;
const int N1 =1e9+8;
int main()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll z[200][200][200][200],s[200][7];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int p=0;p<c;p++)
            cin>>z[i][j][p][0];
        }
    }
    for(int n=1;n<=m;n++)
    {
        for(int i=0;i<7;i++)
        cin>>s[n][i];
    }
    for(int n=1;n<=m;n++)
    {
        ll x1,x2,y1,y2,z1,z2,ht;
        x1=s[n][0]-1,x2=s[n][1],y1=s[n][2]-1,y2=s[n][3],z1=s[n][4]-1,z2=s[n][5],ht=s[n][6];
        for( ;x1<x2;x1++)
        {
            for( ;y1<y2;y1++)
            {
                for( ;z1<z2;z1++)
                {
                    z[x1][y1][z1][n]=z[x1][y1][z1][n-1]-ht;
                    if(z[x1][y1][z1][n]<0)
                    {
                        cout<<n;
                        return 0;
                    }
                }
            }
        }
    }
}