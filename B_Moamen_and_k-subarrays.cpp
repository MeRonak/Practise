#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    int n, k; cin>>n>>k; v arr(n,0); loop(i,n){int temp; cin>>temp; arr[i] = temp;}

int random = 0; 
loop(i,n-1){
    if(arr[i] > arr[i+1])
    {
        random++;
    }
    // else{
    //     random++;
    // }
}
// cout<<random<<" ";
if(random <k)
{
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
return 0;
}