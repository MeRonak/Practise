#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int T; cin>>T; while(T--){
    int n; cin>>n; v a(n,0); v b(n,0);
    for(int i = 0; i<n; ++i){int temp; cin>>temp; a[i] = temp;}
    for(int i = 0; i<n; ++i){int temp; cin>>temp; b[i] = temp;}
    v c(n, 0); for(int i = 0; i< n ; ++i){c[i] = b[i] - a[i];}
    unordered_map<int, int> arr; 
    arr[a[0]]++;
    if(c[0] != 0)
    {
        cout<<"NO"<<endl;
        continue;
    }
    bool flag = true;
    for(int i = 1; i< n ; ++i)
    {
        if(c[i] < 0)
        {
            if(arr.find(-1) == arr.end())
            {
                cout<<"NO"<<endl;
                flag = false; 
                break;
            }
        }
        else if(c[i] > 0)
        {
            if(arr.find(1) == arr.end())
            {
                cout<<"NO"<<endl;
                flag = false; 
                break;
            }
        }
        
        arr[a[i]]++;
        
    }
    if(flag){
    cout<<"YES"<<endl;}
}

return 0;
}