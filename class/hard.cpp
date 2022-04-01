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
	while(1)
	{
		scanf("%s",a+1);
		n=strlen(a+1);
		if(n==1 && a[1]=='.') return 0;
		kmp();
		if(n%(n-p[n])==0) printf("%d\n",n/(n-p[n]));
		else cout<<1<<endl;
	}
}
/*
int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='.') break;
        int p[maxn]={0};
        int i,j=-1;  
        int q=s.size();    
        for(i=1;i<s.size();i++)
        {
            while(j>0&&s[j+1]!=s[i]) j=-1;
            if(s[j+1]==s[i])
            j++;
            p[i]=j;
        }
        if(q%(q-1-p[q-1])==0)
        cout<<q/(q-1-p[q-1])<<endl;
        else cout<<'1'<<endl;
    }
}
   
   
   
   
   
   
   
   while (cin>>s)
	{
		if (s[0]=='.')
			break;
		int n=strlen(s);
		go[0]=0;
		j=-1;        //这里注意
		for (i=1;i<n;i++)
		{
			while (j>0&&s[j+1]!=s[i])    //循环中的一个数没有满足要求,则返回原来的满足要求的一个数.
				j=-1;    //或者用 j=go[j];    其实后者不易理解,而且效率感觉 更慢,还是自己用的这个简单粗暴,
			if (s[j+1]==s[i])
				j++;
			go[i]=j;
			//cout<<go[i]<<endl;
		}
		if (n%(n-go[n-1]-1)==0)   //这里也注意
			cout<<n/(n-go[n-1]-1)<<endl; 
		else
			cout<<'1'<<endl;
	}
 
	return 0;
}
*/