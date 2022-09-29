#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int T;
cin>>T; 
while(T--){
    int n; 
    cin>>n;                                                 
    v arr(n,0);
    for(int i = 0; i<n; ++i){
        int temp; cin>>temp; arr[i] = temp; 
    }
    v random;
    for(int i = n - 1; i>=0; i--)
    {
        if(i == n-1)
        {
            random.push_back(arr[i]);
        }
        else{
            random.push_back(min(arr[i], random[random.size()-1]));
        }
    }
    reverse(random.begin(), random.end());
    // for(int i = 0 ; i< n ; ++i)
    // {
    //     cout<<random[i]<<" ";
    // }
    // cout<<endl;
    int count = 0; 
    for(int i =0 ; i< n ;++i)
    {
        if(arr[i] > random[i])
        {
            count++;
        }
    }
    cout<<count<<endl;                                                                                                                             
}
return 0;
}