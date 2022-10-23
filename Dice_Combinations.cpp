#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e9+7;
int main(){
int n; cin>>n; 
vector<ll> arr(n+1, 0); 
arr[0] = 1;
for(int i = 1; i<=n ; ++i)
{
    for(int j = 1; j <=6; ++j)
    {
        if(i < j)
        {
            break;
        }
        else{
            arr[i] = (arr[i]+arr[i - j])%N;
        }
    }

}
cout<<arr[n]%N<<endl;
return 0;
}