#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
typedef long long s;
const int N =0x3f3f3f3f;
int sum1=0,sum2=0;
int main()
{
    s b;
    for(int i=0;i<100;i++)
    {
        s a;
        cin>>a;
        while(a%2==0)
        {
            sum1++;
            a/=2;
        }
        while(a%5==0)
        {
            sum2++;
            a/=5;
        }
    }
    cout<<min(sum1,sum2);

    
}