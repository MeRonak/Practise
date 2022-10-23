#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b%a , a);
}
int main(){
int T; cin>>T; while(T--){
    int n; cin>>n; 
    v arr(n,0); loop(i,n){int temp; cin>>temp; arr[i] = temp;}
    int count = 0; 
    int random = INT_MAX; 
    int index = -1;
    for(int i = 0; i< n; ++i)
    {
        if(arr[i] < random)
        {
            random = arr[i]; 
            index = i;
        }
    }   
    cout<<n-1<<endl;
    for(int i = 0; i<n; ++i)
    {
        if(i == index)continue;
        else{
            cout<<index+1<<" "<<i+1<<" "<<random<<" "<<random + abs(i - index)<<endl;
        }
    }
    
}
return 0;
}