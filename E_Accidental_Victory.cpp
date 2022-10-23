#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
bool func(v arr, int idx)
{
long long int temp = arr[idx]; 
for(int i = 0; i< arr.size(); ++i){
    if(i == idx)continue;
    else
    {
        if(arr[i] > temp)
        {return false;}
        else{
            temp += arr[i];
        }
    }
}
return true;
}
int main(){
int T; cin>>T; 
while(T--){
    int n; cin>>n; v arr(n,0); loop(i,n){int temp; cin>>temp; arr[i] = temp;}
    v random  = arr;
    sort(arr.begin(), arr.end()); 
    int l = -1; int r = arr.size()-1; 
    while(r-l > 1)
    {
        int mid = l + (r-l)/2; 
        if(func(arr, mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    v ans;
    for(int i = 0 ; i< random.size();++i)
    {
        if(random[i] >= arr[r])
        {
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    for(auto rand : ans)
    {
        cout<<rand<<" ";
    }cout<<endl;
}
return 0;
}