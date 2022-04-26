#include <iostream>
#include <stdlib.h>
#include <stack>
#include <map>
#include <cmath>
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
int cmp(char top,char a)
{
    if((top=='('))
        return 0;
    if(a=='^')
        return 0;
    if((top=='+'||top=='-') && (a=='*'||a=='/'))
        return 1;
    if((a=='+'||a=='-'))
        return 1;
    return 1;
}
int main()
{
    string s;
    getline(cin,s);
    s = s+")";
    ch.push('(');
    for(int i=0; i<s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            ll a=0,p=i;
            while(p<s.size()&&isdigit(s[p]))
            {
                a=a*10+s[p++]-'0';
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