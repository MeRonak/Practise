#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n; v arr(n,0); loop(i,n){int temp; cin>>temp; arr[i] = temp;}
    sort(arr.begin(),arr.end()); 

    v temp(n,0); loop(i, n/2){temp.push_back(arr[i]); temp.push_back(arr[n-1-i]);}
    if(n%2 == 1)
    {
        temp.push_back(arr[n/2]);
    }
    reverse(temp.begin(), temp.end()); 
    loop(i,n){cout<<temp[i]<<" ";}
    cout<<endl;
}
return 0;
}