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
int hw(string s)
{
     string a=s;
    reverse(a.begin(),a.end());
    if(a==s) return 1;
    return 0;
}
int js(string s)
{
    string a=s;
    reverse(a.begin(),a.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='H'||s[i]=='I'||s[i]=='L'||s[i]=='M'||s[i]=='O'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='1'||s[i]=='8') 
        s[i]=s[i];
        else if(s[i]=='J') s[i]='L';
        else if(s[i]=='L') s[i]='J';
        else if(s[i]=='E') s[i]='3';
        else if(s[i]=='S') s[i]='2';
        else if(s[i]=='Z') s[i]='5';
        else if(s[i]=='2') s[i]='S';
        else if(s[i]=='3') s[i]='E';
        else if(s[i]=='5') s[i]='Z';
        else return 0;
    }
        if(s==a) return 1;
        return 0;


}
int main()
{
    string s;
    while(cin>>s)
    {
        if(hw(s))
        {
            if(js(s))
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
            else
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        }
        else
        {
            if(js(s))
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
            else 
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
        }


    }
}
