#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int cal()
{
    int h1,m1,s1,h2,m2,s2,d=0;
    scanf("%d:%d:%d %d:%d:%d (+%d)",&h1,&m1,&s1,&h2,&m2,&s2,&d);
    int time=d*24*3600+h2*3600+m2*60+s2-(h1*3600+m1*60+s1);
    return time;
}
int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int time1=cal();
        int time2=cal();
        int time=(time1+time2)/2;
        int hour = time / 3600, minute = time % 3600 / 60, second = time % 60;
        printf("%02d:%02d:%02d\n", hour, minute, second);
    }
}