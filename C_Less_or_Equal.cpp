#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
    int m = INT_MIN;
int n,k; cin>>n>>k; v arr(n,0); loop(i,n)
{
        cin>>arr[i]; m = max(m, arr[i]);
}
if(k==0)
{
    if(m-1 >=1 )
    {
        cout<<m-1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
priority_queue<int> pq; 
loop(i,n)
{
    pq.push(arr[i]);
    if(pq.size()>k+2)
    {
        pq.pop();
    }
}
int temp = pq.top(); pq.pop();
int temp2 = pq.top(); 
if(temp == temp2)
{
    cout<<-1<<endl;
}
else{
    cout<<temp2<<endl;
}
return 0;
}