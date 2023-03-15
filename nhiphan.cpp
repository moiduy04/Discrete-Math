
#include<bits/stdc++.h>
using namespace std;
//de quy
int dem=0;
int f[2][14];
void dq(int i, int x)
{

    if (i==12) {dem++;return;}
    if (x==0)
    {
        dq(i+1,0);
        dq(i+1,1);

    }
    else
    {
        dq(i+1,0);
    }
}
int main ()
{
    dq(1,1);

    cout <<"DE QUY = "<< dem <<endl;
//quy hoach dong
    f[0][1] = 1;
    f[1][1] = 1;

    for(int i = 2;i <= 12;i ++)
    {
        f[1][i] = f[0][i-1];
        f[0][i] = f[0][i-1] + f[1][i-1];
    }

    cout <<"QUY HOACH DONG = "<< f[1][12];
}
