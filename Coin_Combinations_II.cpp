#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e9+7;
int main(){
int n, sum; cin>>n>>sum; 
v arr(n+1,0); loop(i,n){int temp; cin>>temp; arr[i+1] = temp;}
int dp[n+1][sum+1]; 
for(int i = 1; i<=n ; ++i)
{
    for(int j = 0; j<=sum;++j)
    {
        if(j == 0)
        {
            dp[i][j] = 1;
        }
        else{
            int temp1 = (j < arr[i])? 0 : dp[i][j - arr[i]]; 
            int temp2 = (i == 1)?0 : dp[i-1][j];
            dp[i][j] =(temp1+temp2)%N;
        }
    }
}
cout<<dp[n][sum]<<endl;
return 0;
}