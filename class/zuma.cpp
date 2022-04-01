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
const int maxn=1e6+5;
int p[maxn];
char a[maxn];
int n;
void kmp()
{
	p[1]=0;
	int j=0;
	for(int i=1;i<n;i++)
	{
		while(j>0 && a[j+1]!=a[i+1]) j=p[j];
		if(a[j+1]==a[i+1]) j++;
		p[i+1]=j; 
	}
}
int main()
{
	int o;
    cin>>o;
	scanf("%s",a+1);
	n=strlen(a+1);
	kmp();
	cout<<n-p[n];
	
}