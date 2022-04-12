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
    while(cin>>n&&n)
    {
        int yz[1010],ds[1010];
        for(int i=0;i<n;i++) cin>>yz[i];
        for(int i=0;i<n;i++) cin>>ds[i];
        sort(yz,yz+n);
        sort(ds,ds+n);
        for(int i=1;i<n;i++)
        {
            if(yz[i]==ds[i]) 
            swap(yz[i],yz[i+1]);
        }
        int win=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(yz[i]>ds[i]) win++;
        }
        if(win>double(n/2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
{//增序排列
	return *(int *)a-*(int *)b;
}
int main()
{
	int N,ar[1001]={0},op[1001]={0},i,j,cnt,win,max;
	while(scanf("%d", &N)&&N){
		for(i=0;i<N;i++)	scanf("%d", ar+i);
		for(i=0;i<N;i++)	scanf("%d", op+i);
		win=N/2+1;//需要赢的场次，即ar的最大的数比op最小的数大的数量>=win
		qsort(ar,N,sizeof(int),compare);
		qsort(op,N,sizeof(int),compare);
		i=N-win;//能够稳赢的开始递增的马匹位置
		max=win-1;//对手对应的开始递减的马匹位置
		cnt=0;//统计赢场次数
		for(j=0;j<=max;j++,i++){
			if(ar[i]>op[j])	cnt++;
		}
		if(cnt==win)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}
