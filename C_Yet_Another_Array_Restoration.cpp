#include<bits/stdc++.h>
using namespace std;

void solve(int n, int x, int y, vector<int> &v)
{
    v.push_back(x);
    v.push_back(y);
    int d=n-1;
    while ((y-x)%d!=0)
        d--;
    d=(y-x)/d;
    //cout<<"VAL"<<d;
    int a=x+d;
    int left=n-2;
    while (a!=y)
    {
        v.push_back(a);
        a+=d;
        left--;
    }
    a=x-d;
    while (a>0 && left>0)
    {
        v.push_back(a);
        a-=d;
        left--;
    }
    if (a<=0)
    {
        a=y+d;
        while (left>0)
        {
            v.push_back(a);
            left--;
            a+=d;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for (int test=0;test<t;test++)
    {
        int n, x, y;
        cin>>n>>x>>y;
        vector<int> v;
        solve(n,x,y,v);
        for (auto i:v)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}