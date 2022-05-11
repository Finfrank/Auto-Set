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
    string s;
    while(cin>>s)
    {
        string a="";
        string b="";
        string c="";
        int p=20;
        int p1=s.find('x');
        int p2;
        int w=0;
        if(s.find('+')!=string::npos) 
        {
            p2=s.find('+');
            w=1;
        }
        else p2=s.find('-');
        int p3=s.find('=');
        for(int i=0;i<p1;i++) a+=s[i];
        for(int i=p2+1;i<p3;i++) b+=s[i];
        for(int i=p3+1;i<s.size();i++) c+=s[i];
        // cout<<a<<endl;
        // cout<<c<<endl;
        double x=stod(a);
        double y;
        if(w) y=stod(c)-stod(b);
        else y=stod(c)+stod(b);
        double xx=y/x;
        if(x==0)
        {
            cout<<"error"<<endl;
        }
        else
        cout<<fixed<<setprecision(2)<<xx<<endl;


    }
}