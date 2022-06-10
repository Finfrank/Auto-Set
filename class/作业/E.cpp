#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
const int N=1010,M=N*N,P=131;
ULL h[N][N],p[M];
int n,m,a,b;
int sum=0;
char str[N];
ULL calc(ULL f[],int l,int r)
{
	return f[r]-f[l-1]*p[r-l+1];
}
int main()
{
	cin>>n>>m>>a>>b;
	p[0]=1;
	for(int i=1;i<=n*m;i++)
		p[i]=p[i-1]*P;

	for(int i=1;i<=n;i++)
	{
       cin>>(str+1);
       for(int j=1;j<=m;j++)
       	h[i][j]=h[i][j-1]*P+str[j]-'0';
       //计算所有位置在列方向的哈希
	}
	unordered_set<ULL>S;
	//接下来是计算出n*m中所有包含的a*b的哈希值
	for(int i=b;i<=m;i++)
	{//列的宽度最少为b，所以从b开始遍历
		ULL s=0;
		int l=i-b+1,r=i;
		//计算相对应的列的范围
		for(int j=1;j<=n;j++)
		{
			s=s*p[b]+calc(h[j],l,r);
			//s*p[b]的原因是每增加一行在一维上是增加了b个数，然后加上当前位置的哈希值
			if(j>a)s-=calc(h[j-a],l,r)*p[a*b];
			//可以用一维的哈希来思考上语句,f[r]-f[l-1]*p[r-l+1]
			//s就相当于f[r],calc(h[j-a],l,r)计算的行线段的哈希值就是f[l-1]
			//p[a*b]就相当于p[r-l+1],这是因为在一维上来说它们之间的“距离”始终保持a*b的长度
			if(j>=a)S.insert(s);
			//当行数大于a时，将存在的a*b的哈希存储起来
		}
	}
	int Q;
	cin>>Q;
	while(Q--)
	{
		ULL s=0;
		for(int i=1;i<=a;i++)
		{
			cin>>str;
			for(int j=0;j<b;j++)
			s=s*P+str[j]-'0';//直接计算a*b的哈希值（一维）
		}
		if(S.count(s)) sum++;
	}
    cout<<sum;
	return 0;
}