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
    cin>>n;
    while(n--)
    {
        int m,b[1010]={0};
        cin>>m;
        for(int i=0;i<m;i++) cin>>b[i];
        int y=*min_element(b,b+m);
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=b[i]-y;
        }
        cout<<sum<<endl;
    }
}