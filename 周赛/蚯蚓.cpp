// 众所周知，蚯蚓剁成两半之后还能再生，那么重生之后的蚯蚓，它的头和尾是怎么定义的呢？小编也不知道。
// 现在我们从不大于N的正整数中取出两个数A和B
// 当A和B以10为基数，并且没有前导零时，A的最后一位数字等于B的第一位，A的第一位数字等于B的最后一位数字。这样就算得上一对合格的蚯蚓（？）
// 给你一个正整数N，求出这种合格的数对的数量。
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
#define ll long long
int main()
{
    int n;
    cin>>n;
    int sum=0;
    if(n>=10) sum+=9;
    else sum+=n;
    for(int i=11;i<=n;i++)
    {
        string p=to_string(i);
        string a=p,b=p;
        swap(p[0],p[p.size()-1]);
        if(p[0]=='0') continue;
        int j=stoi(p);
        if(j<=n)
        sum+=(pow(10,p.size()-2));
        reverse(a.begin(),a.end());
        if(b==a)
        {
            sum+=(2*(a.size()-1));
        }
        // 11 11 11 1 1 11
        

    }
    cout<<sum;
}

