// 定义域为 N∗ 的函数 f(x)=−(x−a)(x−b)，记 S(i)=x=1∑i​f(x)=f(1)+f(2)+⋯+f(i)：

// 求 m,n∈(0,+∞) 且 m<n 时，S(n)−S(m) 的最大值。

// 输入描述:
// -----

// ```
// 全文第一行输入一个正整数 T(1\le T\le10^5)T(1≤T≤105)，表示数据组数。

// 接下来 TT 行，每行两个正整数 a,b(1\le a<b\le10^9)a,b(1≤a<b≤109) 描述函数 f(x)f(x)。
// ```

// 输出描述:
// -----

// ```
// 求所有的整数 m,n(0<m<n)m,n(0<m<n) 中，使得 S(n)-S(m)S(n)−S(m) 取得最大时对应 S(n)-S(m)S(n)−S(m) 的值，答案对 998244353998244353 取模，每组输出之间需要换行。
// ```

// 示例 1

// 说明
// --

// ```
// 一组合法的 m,nm,n 值为 1,41,4，此时 f(x)=-x^2+6x-8,S(n)-S(m)=1f(x)=−x2+6x−8,S(n)−S(m)=1。
// ```

#include<iostream>
using namespace std;
#define ll long long
const ll mod=998244353;
int c,a,b;

int main()
{
    for(cin>>c;c--;) 
    {
        cin>>a>>b;
        __int128 d=b-a-1;
        d=d*(d+1)*(d+2)/6%mod;
        cout<<(int)d<<endl;
    }
	return 0;
}
//分析二次函数图像得，答案为|S(a)-S(b)|
