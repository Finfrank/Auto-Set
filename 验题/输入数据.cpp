/***生成输入数据的代码***/
#include<iostream> 
#include<random> //包含mt19937类
#include<ctime> //包含time()函数
#include<algorithm> //包含random_shuffle() 函数
#include<vector>
using namespace std;
mt19937 myRand(time(0)); //构造一个随机函数myRand
int rangeRand(int L,int R){ // 在区间[L,R]上生成一个随机数
return myRand()%(R-L+1)+L;
}
int main(){
char p[]="0.in";
for(int i=0;i<10;i++){
freopen(p,"w",stdout);//文件制造函数，输入数据的格式是.in
int n=rangeRand(1,100); 
vector<int> a;
cout<<n<<endl;
for(int j=1;j<=n;j++) a.push_back(rangeRand(1,1000)); //先随机生成n个
     for(int j=1;j<n;j++){
     if(rangeRand(1,10)<=3) a[j]=a[j-1]; // 以3/10的概率制造重复的数，因为题目的任务之一是去重，所以数据点中需要体现这一点
}
random_shuffle(a.begin(),a.end()); //重新打乱序列，避免重复的数总是相邻
for(int j=0;j<n-1;j++) cout<<a[j]<<' ';
cout<<a[n-1]; // 结尾不空格，末尾不换行
p[0]++; 
}
}
