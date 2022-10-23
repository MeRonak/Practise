#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e9+7;
int main(){
int n; cin>>n; int dp[n+1][n+1]; 
loop(i,n)
{
    loop(j,n)
    {
        char temp; cin>>temp; 
        if(temp == '*')
        {
            dp[i+1][j+1] = 0;
        }
        else{
        dp[i+1][j+1] = 1;
        } 
    }
}
int arr[n+1][n+1];

    for(int i = n; i>=1; --i)
    {
        for(int j = n; j>=1; --j)
        {
            if(i == n && j == n)
            {
                arr[i][j] = 1;
            }
            else
            {
                if(dp[i][j] == 0)
                {
                    arr[i][j] = 0;
                    continue;
                }
                int temp1 = (i == n)? 0 : arr[i+1][j];
                int temp2 = (j==n)? 0 : arr[i][j+1];

                arr[i][j] = (temp1+temp2)%N;
            }
        }
    }
    if(dp[n][n] == 0)
    {cout<<0<<endl;}
    else cout<<arr[1][1]<<endl;

return 0;
}