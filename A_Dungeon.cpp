#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int T; cin>>T; while(T--){
    int a, b, c; cin>>a>>b>>c; 
    int sum = a+b+c; 
    int k = sum / 9;
    if(sum % 9 == 0 && (a >= k && b>=k && c>=k))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
return 0;
}