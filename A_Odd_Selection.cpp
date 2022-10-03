#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T;cin>>T;while(T--){int n, x;int odd= 0, even =0; cin>>n>>x; v arr(n,0); loop(i, n){int temp; cin>>temp;(temp%2 == 0)?(even++):(odd++); arr[i] = temp;}
if(n == x)
{
    if(odd%2 == 1){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}
else if(odd == n)
{
    if(x%2 == 0)
    {
        cout<<"No"<<endl;
    }
    else{cout<<"Yes"<<endl;}
}
else if(odd!=0 && odd != n)
{
    cout<<"Yes"<<endl;
}
else{cout<<"No"<<endl;}
}

return 0;
}