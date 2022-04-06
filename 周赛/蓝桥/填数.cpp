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
    int p=0,t=0;
    for(int i=1;i<=n;i++)
    {
        if(i&1)
        {
            p++;
            int j=0;
            while(j<n){
            cout<<p<<" ";
            p++;
            j++;}
            cout<<endl;
        }
        if(i%2==0)
        {
            p--;
            p+=n;
            int t=p;
            for(int j=0;j<n;j++)
            {
                cout<<t<<" ";
                t--;
            }
            cout<<endl;
        }
    }
}