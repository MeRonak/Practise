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
    int n, x; cin>>n>>x; v arr(n,0);
    int sum = 0; int total = 0; 
    loop(i,n)
    {
        int temp; cin>>temp; arr[i] = temp;
        if(temp%x == 0){
            total++;
        }
        sum = sum + temp;
    }
    if(total == n){
        cout<<-1<<endl;
    }
    else if(sum % x != 0){
    cout<<n<<endl;
    }
    else{
        int pre = sum;
        int mini = INT_MIN;
        for(int i = 0; i<n ; ++i){
            pre -= arr[i];
            if(pre %x != 0){
                mini = max(mini, n - i-1);
                break;
            }
        }
        int suf = sum; 
        for(int i = n-1; i>=0; i--)
        {
            suf -= arr[i];
            if(suf % x != 0)
            {
                mini = max(mini, i);
                break;
            }
        }     
        cout<<mini<<endl;
    }
}
return 0;
}