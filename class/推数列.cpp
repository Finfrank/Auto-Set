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
#define ull long long

ll n,m,i,j,k,t,answ;

struct matrix{ ll g[51][51]; }f,ans;

ll get(){

char x;int f=1;

while ((x=getchar())>'9'||x<'0')

if (x=='-') f=-1;

ll sum=x-'0';

while ((x=getchar())<='9'&&x>='0') sum=sum*10+x-'0'; return sum*f;

}

void get_unit_matrix(matrix &x){

for (int i=1;i<=k;i++){

for (int j=1;j<=k;j++){

if (i==1) x.g[i][j]=j;

else

if (i==j+1) x.g[i][j]=1;

else x.g[i][j]=0;

}

}

}

void get_matrix(matrix &x){

for (int i=1;i<=k;i++){

for (int j=1;j<=k;j++){

if (i==j) x.g[i][j]=1;

else x.g[i][j]=0;

}

}

} matrix matrix_multiple(matrix &a,matrix &b){ matrix res; memset(res.g,0,sizeof(res.g));

for (int i=1;i<=k;i++){

for (int j=1;j<=k;j++){

if (a.g[i][j]){

for (int p=1;p<=k;p++){

res.g[i][p]=(res.g[i][p]+a.g[i][j]*b.g[j][p])%m;

}

}

}

} return res;

}

void matrix_fast_power(ll q){

matrix tmp; get_unit_matrix(tmp); get_matrix(ans); while (q){ if (q&1){ ans=matrix_multiple(ans,tmp); q--; } else{ tmp=matrix_multiple(tmp,tmp); q>>=1; }

}

}

int main(){

//std::ios::sync_with_stdio(false); 
t=get(); m=1e9+7; while (t--){ n=get(); k=get(); answ=0; if (n<=k){ std::cout<<n<<"\n"; continue; } else{

for (i=1;i<=k;i++) f.g[i][1]=k-i+1; matrix_fast_power(n-k); 
for (i=1;i<=k;i++){

answ=(answ+ans.g[1][i]*(k-i+1))%m; 
} std::cout<<answ<<"\n";

}

} 
return 0;

}