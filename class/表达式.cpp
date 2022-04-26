/* #include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<unordered_map>
#include<map>
using namespace std;
typedef long long ll;
stack<char> q,n;
string s;
ll sum;
void solve()
{
    int b=n.top();n.pop();
    int a=n.top();n.pop();
    char c = q.top();q.pop();
    int ss;
    if(c=='+') ss=a+b;
    else if(c=='-') ss=a-b;
    else if(c=='*') ss=a*b;
    else if(c=='/') ss=a/b;
    else ss=pow(a,b);
    n.push(ss);
}
int main()
{
    map<char,int> yx{{'+',1}, {'-',1}, {'*',2}, {'/',2}, {'^',3}};
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
            int sum1=0,p=i;
            while(isdigit(s[p])&&p<s.size())
            {
                sum1=sum1*10+s[p]-'0';
                p++;
            }
            i=p-1;
            n.push(sum1);
        }
        else
        {
            while(q.size() && yx[q.top()]>=yx[s[i]]) solve(); 
            q.push(s[i]);
        }
    }
        while(q.size()) solve(); 
        cout<<n.top();
} */
#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<unordered_map>
#include<map>
#define ll long long
using namespace std;
stack <ll> num;
stack <char> ch;
ll solve()
{
    ll b=num.top(); num.pop();
    ll a=num.top(); num.pop();
    char c=ch.top();ch.pop();
    ll ss;
    if(c=='+') ss=a+b;
    else if(c=='-') ss=a-b;
    else if(c=='*') ss=a*b;
    else if(c=='/') ss=a/b;
    else if(c=='^') ss=pow(a,b);
    else return 0;
    return ss;
}
bool cmp(char top,char a)
{
    if((top=='('))
        return false;
    if(a=='^')
        return false;
    if((top=='+'||top=='-') && (a=='*'||a=='/'))
        return false;
    if((a=='+'||a=='-'))
        return true;
    return true;
}
int main()
{
    string s;
    cin>>s;
    s = s+")";
    ch.push('(');
    for(int i=0; i<s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            ll a=0,p=i;
            while(p<s.size()&&isdigit(s[p]))
            {
                a=a*10+(s[p++]-'0');
            }
            i=p-1;
            num.push(a);
        }
       else        
        {
            while(cmp(ch.top(),s[i]))
            {
                ll a=solve();
                num.push(a);
            }
            ch.push(s[i]);
        }
    }
    cout<<num.top();
} 
/* #include <iostream>
#include <stdlib.h>
#include <stack>
#include <map>
#include <cmath>
#define ll long long
using namespace std;
stack <ll> num;
stack <char> ch;
int yunsuan()
{
    ll x2=num.top();            //注意x1与x2的顺序
    num.pop();
    ll x1=num.top();
    num.pop();
    char c=ch.top();
    ch.pop();
    switch(c)
    {
    case '+':
        return x1+x2;
        break;
    case '-':
        return x1-x2;
        break;
    case '*':
        return x1*x2;
        break;
    case '/':
        return x1/x2;
        break;
    case '^':
        return x1 = pow(x1,x2);
        break;
    }
    return 0;
}
bool cmp(char top,char a)
{
 
    if((top=='('))
        return false;
    if(a=='^')
        return false;
    if((top=='+'||top=='-') && (a=='*'||a=='/'))
        return false;
    if((a=='+'||a=='-'))
        return true;
    return true;
}
int main()
{
 
    string s;
    cin>>s;
    s = s+")";
    ch.push('(');
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            ll a=s[i]-'0';
            for(i=i+1; i<len; i++){
                if(s[i]>='0' && s[i]<='9')
                {
                    a=a*10+(s[i]-'0');
                }
                else
                {
                    i--;
                    break;
                }
            }
            num.push(a);
        }
       else         //是符号的时候
        {
            while(cmp(ch.top(),s[i]))
            {
                ll a = yunsuan();
                num.push(a);
            }
            ch.push(s[i]);
        }
    }
    cout<<num.top();
    return 0;
} */