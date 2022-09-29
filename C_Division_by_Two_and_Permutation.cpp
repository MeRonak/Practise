#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int func(int x, int n, vector<bool> &check)
{
    while(x>n && check[x+1] == true)
    {
        x = x/2;
    }
    check[x+1] = true;
    return x;
}
int main(){
int T; cin>>T; while(T--){
    int n; cin>>n; v arr(n,0); for(int i = 0; i< n;++i){int temp; cin>>temp; arr[i]= temp;}
    vector<bool> check(n+1, false);
    sort(arr.begin(), arr.end(),[](int a, int b)
    {
        return a > b;
    });
    bool temp = true;
    for(auto i : arr)
    {
        int x = i ;
        while(x > n || check[x])
        {
            x = x/2;
        }
        if(x > 0)check[x]= true;
        else temp = false;
    }
    if(temp)
    {
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

}
return 0;
}