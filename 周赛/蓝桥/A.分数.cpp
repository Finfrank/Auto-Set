#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
typedef long long s;
int main()
{
    s a=2,b=2;
    for(int i=1;i<=18;i++)
    {
        a*=2,b*=2;
    }
    a*=2;
    a=a-1;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0&&b%i==0)
        {
            a/=i;
            b/=i;
        }
    }
    cout<<a<<'/'<<b;
}