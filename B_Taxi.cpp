#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    unordered_map<int, int> temp;
    for(int i = 0; i<n; ++i)
    {
        int var;
        cin>>var;
        temp[var]++;
    }
    int ans  =0; 
    ans = temp[3]+temp[4];
    if(temp[3]<=temp[1])
    {
        temp[1] = temp[1] - temp[3];
    }
    else
    {
        temp[1] = 0;    }
    ans = ans + temp[2]/2;
    if(temp[2]%2 == 1)
    {
        ans++;
        temp[2] = 0;
        temp[1] = max(0, temp[1]-2);
    }
    ans = ans + temp[1]/4;
    if(temp[1]%4 != 0)
    {
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}