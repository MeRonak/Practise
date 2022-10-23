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
    int n; cin>>n; v arr(n,0); loop(i,n){int temp; cin>>temp; arr[i] = temp;}
    sort(arr.begin(), arr.end()); reverse(arr.begin(), arr.end()); 
    ll alice = 0 ; ll bob = 0;
    loop(i,n)
    {
        if(i %2 == 0)
        {
            if(arr[i]%2 == 0)
            {
                alice = alice+ arr[i];
            }
        }
        else{
            if(arr[i]%2 == 1)
            {
                bob = bob + arr[i];
            }
        }
    }
    if(alice == bob){cout<<"Tie"<<endl;}
    else if(alice > bob)
    {cout<<"Alice"<<endl;}
    else{
        cout<<"Bob"<<endl;
    }
}
return 0;
}