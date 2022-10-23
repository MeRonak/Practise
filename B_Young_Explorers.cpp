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
    int n; cin>>n; v arr(n,0); loop(i,n)
    {
        int temp; cin>>temp; arr[i] = temp;
    }sort(arr.begin(), arr.end());
    int ans = 0; 
    int cur  = 0; 
    loop(i, n)
    {
        cur++;
        if(cur == arr[i])
        {
            ans++;
            cur = 0; 
        }
    }
    cout<<ans<<endl;
}
return 0;
}