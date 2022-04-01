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
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int count=0;
    int p=0;
    while((p=a.find(b,p))<a.size())
    {
        count++;
        p++;
    }  
    cout<<count;      
} 
