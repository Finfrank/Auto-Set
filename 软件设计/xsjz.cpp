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
typedef struct {
    int i,j;
    int data;
}tri;
typedef struct {
    tri data[10];
    int n,m,num;
}TSMatrix;
TSMatrix Trans(TSMatrix M, TSMatrix &T)
{
    int p,q,col;
    T.m = M.n;
    T.n = M.m;
    T.num = M.num;
    if (T.num) {
        q = 1;
        for (col = 1; col <= M.n; col++) {
            for (p = 1; p <= M.num; p++)
            if (M.data[p].j == col) {
                T.data[q].i = M.data[p].j;
                T.data[q].j = M.data[p].i;
                T.data[q].dtaa = M.data[p].e;
                q++;
            }
        }
    }
    
}