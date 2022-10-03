#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n;
    unordered_map<int, ll> m; loop(i, n){int temp; cin>>temp; m[temp-i-1]++;}ll ans = 0;
    for(auto l : m)
    {
        if(l.second >= 2)
        {
            ans = ans + (ll)(l.second*(l.second-1))/2;
        }
    }
    cout<<ans<<endl;
}
return 0;
}