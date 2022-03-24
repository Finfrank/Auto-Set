/***生成输出数据的代码***/
#include<iostream> 
#include<random> //包含mt19937类
#include<ctime> //包含time()函数
#include<algorithm> //包含random_shuffle() 函数
#include<vector>
using namespace std;
int n,a[105];
int solve(){//将解答代码填在这个函数里
scanf("%d",&n); //注意!! 批量生成答案的时候输入不可以用 cin !! 
//如果必须使用的话，则不能批量生成，需要手动一个个生成
for(int i=1;i<=n;i++) scanf("%d",a+i);
sort(a+1,a+n+1);
int t=unique(a+1,a+n+1)-a-1;
cout<<t<<'\n';
for(int i=1;i<=t;i++) cout<<a[i]<<" ";
puts("");
return 0;
}
signed main(){
char p[]="0.in",q[]="0.out";
for(int i=0;i<10;i++){
freopen(p,"r",stdin);
freopen(q,"w",stdout);
solve();
p[0]++,q[0]++;
}
return 0;
}
