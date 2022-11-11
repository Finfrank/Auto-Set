#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    while(cin>>s)
    {
        int n=strlen(s),j=0;
        stack<int>num;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='P')
            {
                j++;
                num.push(j);
            }
            if(s[i]=='Q')
            {
                if(num.size())
                {
                    cout<<num.top()<<" ";
                    num.pop();
                }
                else cout<<"error",break;
            }
        }
        cout<<endl;
    }
}