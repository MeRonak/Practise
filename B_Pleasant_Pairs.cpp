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
    int n; cin>>n; vector<ll> arr(n+1,0); loop(i,n){ll temp; cin>>temp; arr[i+1] = temp;}int count = 0; 
    for(int i = 1; i<=n; i++)
    {
        for(int j = arr[i] - i; j<=n; j += arr[i])
        {
            if(j >= 0 )
            {
                if(arr[i]*arr[j] == i+j && i<j){
                count++;}
            }
        }   
    }
    cout<<count<<endl;
}
return 0;
}