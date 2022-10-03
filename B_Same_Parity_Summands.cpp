#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    int n, k; cin>>n>>k; 
    int n1 = n - (k-1); 
    if(n1>0 && n1%2 == 1)
    {
        cout<<"YES"<<endl;
        loop(i, k-1){cout<<1<<" ";}cout<<n1<<endl;continue;
    }
    int n2 = n-2*(k-1); 
    if(n2>0 && n2%2 == 0)
    {
        cout<<"YES"<<endl;
        loop(i, k-1){cout<<2<<" ";}cout<<n2<<endl;
        continue;
    }
    cout<<"NO"<<endl;
}
return 0;
}