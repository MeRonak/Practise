#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
unordered_map<int, ll> arr1, arr2; 
int n; cin>>n; v arr(n, 0); for(int i = 0;  i< n; ++i){int temp; cin>>temp; arr[i] = temp; if(arr1.find(temp) == arr1.end()){arr1[temp] = i+1;}}
for(int i = n-1; i>=0; i--){
    if(arr2[arr[i]] <= 0)
    {
        arr2[arr[i]] = n - i;
    }
}
int m; cin>>m; v brr(m,0); for(int i = 0; i<m ; ++i){int temp; cin>>temp; brr[i] = temp;}
ll  count = 0; 
for(int i = 0 ; i< m ; ++i)
{   
    count = count + arr1[brr[i]];
}
ll ans = 0; 
for(int i = 0; i<m; i++)
{
    ans = ans + arr2[brr[i]];
}
cout<<count<<" "<<ans<<endl;
// for(auto a : arr1)
// {
//     cout<<a.first<<" "<<a.second<<endl;
// }
// cout<<endl;
// for(auto b : arr2)
// {
//     cout<<b.first<<" "<<b.second<<endl;
// }

return 0;
}