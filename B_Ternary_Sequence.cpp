#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--){
    int x, y, z; cin>>x>>y>>z; v arr; 
    loop(i, z){arr.push_back(2);}
    loop(i, y){arr.push_back(1);}
    loop(i,x){arr.push_back(0);}
    int a, b, c; cin>>a>>b>>c; v brr; 
    loop(i , a){brr.push_back(0);}
    loop(i, b){brr.push_back(1);}
    loop(i, c){brr.push_back(2);}
    int ans = 0;
    loop(i , a+b+c){
       if(arr[i] > brr[i])
       {
        ans = ans + arr[i]*brr[i];
       }
       else if(arr[i] < brr[i])
       {
        ans = ans - arr[i]*brr[i];
       }
    }
    cout<<ans<<endl;
    // cout<<endl;
    // int ans  =0;
    // loop(i, a+b+c){if(arr[i] > brr[i]){ans = ans + arr[i]*brr[i];}else if(arr[i]<brr[i]){ans += (-1*arr[i]*brr[i]);}}
    // cout<<ans<<endl;
}
return 0;
}