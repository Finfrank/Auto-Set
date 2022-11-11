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
    string a;
    while(getline(cin,a))
    {
        stack<int> s;
        int w=1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='P')
            {
                s.push(w);w++;
            }
            if (a[i]=='Q')
            {
                if(!s.size()) {printf("error");break;}
                else 
                {
                    int r=s.top();
                    printf("%d ",r);
                    s.pop();
                }
            }
        }
        putchar('\n');
    }
}