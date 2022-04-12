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
    char a;
    while(cin>>a)
    {
        int t =a-65+1;
        for(int i=0;i<t;i++)
        {
            int kg=t-i;
            for(int j=0;j<kg-1;j++)
            {
                cout<<" ";
            }
            for(int j=65;j<=65+i;j++)
            {
                cout<<char(j);
            }
            for(int j=65+i-1;j>=65;j--)
            {
                cout<<char(j);
            }
            for(int j=0;j<kg-1;j++)
            {
                cout<<" ";
            }
            cout<<endl;

        }
        cout<<endl;
    }
}