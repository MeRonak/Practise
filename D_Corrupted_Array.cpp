#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
void printing(vector<ll> arr, int a, int b, int c)
{
    for(int i = a; i<b; ++i)
    {
        if(i == c)
        {
            continue;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n; 
    vector<ll> arr(n+2,0); loop(i,n+2){ll temp; cin>>temp; arr[i] = temp;}
    sort(arr.begin(), arr.end());
    vector<ll> random = arr; 
    loop(i,n+2)
    {
        if(i == 0)
        {
            continue;
        }
        else
        {
            random[i] = random[i] + random[i-1];
        } 
    }
    // printing(random, 0, random.size(), -1);
    bool flag = false;
    for(int i = n+1; i>=0; i--)
    {
        if(i == n+1)
        {
            if(arr[i-1] == random[i-2])
            {
                printing(arr, 0, i-1,-1);
                flag = true;                break;
            }
        }
        else{
            if(arr[n+1] == random[n] - arr[i])
            {
                printing(arr,0,n+1,i);flag = true;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<-1<<endl;
    }

}
return 0;
}