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
const int maxn =2003;
char a[50][50];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) 
        scanf("%c",&a[i][j]);
    }
    //int b[maxn];
    int sum=0;
   // for(int i=0;i<m;i++) cin>>b[i];
    string x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j =m-1;j<n;j++) 
        {
        int z=0;
        while(z<j)
        {
            if(a[i][z]=='1') break;
            z++;
        }
        if(z==j) sum++;
        }
    }
    cout<<sum;
}