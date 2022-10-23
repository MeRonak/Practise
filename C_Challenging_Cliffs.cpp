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
    int n; cin>>n; v arr(n,0); loop(i, n){int temp; cin>>temp; arr[i] = temp;}
    sort(arr.begin(), arr.end());
    if(n == 2)
    {
        cout<<arr[0]<<" "<<arr[1]<<endl;
        continue;
    } 
    int temp = -1; int mn = INT_MAX; 
    loop(i,n-1)
    {
        if(abs(arr[i+1] - arr[i]) < mn)
        {
            temp = i; 
            mn = abs(arr[i+1] - arr[i]);
        }
    }
    for(int i = temp +1; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i<=temp; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;
}