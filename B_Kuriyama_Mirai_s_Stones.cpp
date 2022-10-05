#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n; cin>>n; vector<ll> arr(n,0); loop(i,n){cin>>arr[i];}
vector<ll> random = arr; sort(random.begin(), random.end());
loop(i,n){if(i == 0){continue;} else{arr[i] = arr[i] + arr[i-1];}}
loop(i,n){if(i==0){continue;} else{random[i] = random[i] + random[i-1];}}
int m; cin>>m; while(m--)
{
    int l, r, type; cin>>type>>l>>r; 
    if(type == 1)
    {
        if(l-2 < 0)
        {
            cout<<(ll)arr[r-1]<<endl;
        }
        else cout<<(ll)arr[r-1] - (ll)arr[l-2]<<endl;
    }
    else{
        if(l -2 < 0)
        {
          cout<<(ll)random[r-1]<<endl;
        }
        else cout<<(ll)random[r-1]-(ll)random[l-2]<<endl;
    }
}
return 0;
}