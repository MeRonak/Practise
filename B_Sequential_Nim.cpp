#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int T; cin>>T;
while(T--){
    v arr;
    int one = 0; 
    int n; cin>>n; for(int i = 0; i< n ; ++i){int temp; cin>>temp; arr.push_back(temp); }
    while(one < n && arr[one] == 1){one++;}
    if(one == n ){
        if(one%2 == 1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    else{
        if(one%2 == 0)
        {
            cout<<"First"<<endl;
        }
        else{cout<<"Second"<<endl;}
    }
}
return 0;
}