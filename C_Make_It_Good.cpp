#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n; v arr(n,0); loop(i,n){cin>>arr[i];}
    int pos = n-1; while(pos >0 && arr[pos-1]>= arr[pos]){pos--;}
    while(pos >0 && arr[pos-1]<=arr[pos]){pos--;}cout<<pos<<endl;
}
return 0;
}