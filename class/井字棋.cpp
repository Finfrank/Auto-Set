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
int gcd(int a,int b)
{
    return a%b?gcd(b,a%b):b;
}
int main()
{
    char s[5][5];
    int p=0;
    for(int i=0;i<3;i++) 
    for(int j=0;j<3;j++)
    {
        cin>>s[i][j];
        if(s[i][j]=='.') p++;
    }
    if(p<3)
    {
        cout<<0;
        return 0;
    }
    int ans=p*(p-1)*(p-2);
    ans/=6;
    int cnt=0;
    if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][0]=='.'){
        cnt++;
    }
    if(s[1][0]==s[1][1]&&s[1][1]==s[1][2]&&s[1][0]=='.'){
        cnt++;
    }
    if(s[2][0]==s[2][1]&&s[2][1]==s[2][2]&&s[2][0]=='.'){
        cnt++;
    }
    if(s[0][0]==s[1][0]&&s[2][0]==s[1][0]&&s[1][0]=='.'){
        cnt++;
    }
    if(s[0][1]==s[1][1]&&s[2][1]==s[1][1]&&s[1][1]=='.'){
        cnt++;
    }
    if(s[0][2]==s[1][2]&&s[2][2]==s[1][2]&&s[1][2]=='.'){
        cnt++;
    }
    if(s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[0][0]=='.'){
        cnt++;
    }
    if(s[0][2]==s[1][1]&&s[1][1]==s[2][0]&&s[0][2]=='.'){
        cnt++;
    }
    if(cnt==0)
    {
        cout<<0;
        return 0;
    }
    else{
        cout<<cnt/gcd(cnt,ans)<<' '<<ans/gcd(cnt,ans);
    }




}