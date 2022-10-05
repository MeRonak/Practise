#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int big(ll num)
{
    int ans = INT_MIN;
    while(num)
    {   int temp = num%10;
        ans = max(ans, temp);
        num = num/10;
    }
    return ans;
}
int small(ll num)
{
    int ans = INT_MAX; 
    while(num)
    {
        int temp = num%10; ans = min(ans, temp); num = num/10; 
    }
    return ans; 
}
int main(){
int T; cin>>T; while(T--){
    ll a, k; cin>>a>>k; 
    loop(i,k-1)
    {
        int var1 = big(a); 
        int var2 = small(a);
        a = a + var1*var2;
        if(var1 == 0 || var2 == 0)
        {
            break;
        }   
        
    }
    cout<<a<<endl;
}
return 0;
}