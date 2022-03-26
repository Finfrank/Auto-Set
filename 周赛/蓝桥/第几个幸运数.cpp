#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
typedef long long s;
int main()
{
    s x=3,q=0;
    s n=59084709587505;
    for(int i=0;pow(3,i)<n;i++)
    {
        for(int j=0;pow(5,j)<n;j++)
        {
            for(int z=0;pow(7,z)<n;z++)
            {
                if(pow(3,i)*pow(5,j)*pow(7,z)<n) q++;
                else break;
            }
        }

    }
    cout<<q;
}