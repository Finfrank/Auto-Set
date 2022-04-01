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
typedef long long ll;
int n;
ll a[55];
ll s[55];
void db()
{
    a[0]=1;
	for(int i=1;i<=50;i++)
    {
		a[i]=a[i-1]*3;
			s[i]+=s[i-1]+a[i];
	}
}
void fx(int x){
    int ans;
    if(x<=3)
    {
        if(x==1) cout<<2;
        else if(x==2) cout<<3;
        else cout<<6;
        return ;
    }
	for(int i=2;i<=50;i++){
		if(x>s[i-1]&&x<=s[i]){
			ans=i; break; 
		}
	}
	int d=a[ans];
	d/=3;
	x-=s[ans-1];
	if(x<=d)
    { 
		cout<<2;
		fx(x+s[ans-2]);
	}
    else if(x<=2*d)
    {
		cout<<3;
		fx(x-d+s[ans-2]);
	}
    else{
		cout<<6;
		fx(x-2*d+s[ans-2]);
	}
	return;
}
 
int main(){
    db();
	cin>>n;
	fx(n);
}
 