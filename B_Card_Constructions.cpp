#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
ll func(ll n )
{
    return (ll)((ll)sqrt(24*n+1)-1)/6;
}
ll func2(ll h)
{
    return (ll)(h*(1+3*h))/2;
}
int main(){
int T; cin>>T; while(T--){
    ll n; cin>>n; int count = 0; 
    while(n)
    {
        ll heigth = func(n);
        if(heigth > 0)
        {
            count++;
            n = n - func2(heigth);
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}
return 0;
}