#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n, m, a, b; cin>>n>>m>>a>>b; 
if(b/m >= a){cout<<n*a<<endl;}
else
{
    int temp = n % m; 
    // cout<<temp<<" ";
    cout<<min(temp * a+ ((n - temp)/m)*b, (n/m+1)*b)<<endl;
}
return 0;
}