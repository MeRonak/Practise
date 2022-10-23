#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n; cin>>n; 
v dp(n+1,0);
for(int i = 1; i<=n; ++i)
{
    int temp = i; 
    int random = INT_MAX;
    while(temp!=0)
    {
        int di = temp%10; 
        temp /= 10; 
        if(di == 0){continue;}
        random = min(random, 1+dp[i - di]);
    }
    dp[i] = random;
} 
cout<<dp[n]<<endl;
return 0;
}