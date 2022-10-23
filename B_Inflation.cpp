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
    int n, k; cin>>n>>k; vector<long double> arr(n,0); loop(i,n)
    {
        ll temp; cin>>temp; arr[i] = temp; 
    }
    long double sum1 = 0.0; 
    long double sum2 = 0.0; 
    for(int i = 1; i< n; ++i)
    {
        sum1 += arr[i-1]; 
        sum2 += arr[i-1];
        if(arr[i]*100.0/sum2 > k)
        {
            long double rant = arr[i]*100.0/k - sum2; 
            rant = ceil(rant); 
            sum2 += rant;
        }
    }
   cout<<(long long int)(sum2 - sum1)<<endl;
}
return 0;
}