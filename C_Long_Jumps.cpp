#include<bits/stdc++.h>
using namespace std;
int main(){
int T; 
cin>>T; 
while(T--)
{
    int n; 
    cin>>n; 
    vector<int> arr; 
    for(int i = 0; i< n; ++i)
    {
        int temp; 
        cin>>temp; 
        arr.push_back(temp);
    }
    int ans = -1;
    int m = -1;
    for(int i = n-1; i>=0; i--)
    {
        
        if(i + arr[i] <= n-1)
        {
            arr[i] = arr[i] + arr[i+arr[i]];
        }
        else{
            arr[i] = arr[i];
        }
        // cout<<arr[i]<<" ";
        m = max(m, arr[i]);
    }
    cout<<m<<endl;
    // cout<<endl;
    // for(int i = 0;i<n; ++i)
    // {
    //     if(arr[i] == m)
    //     {
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
}
return 0;
}