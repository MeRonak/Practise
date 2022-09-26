#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n; 
    int k; 
    cin>>k; 
    
    vector<int> arr; 
    for(int i = 0; i< n; ++i)
    {
        int var; 
        cin>>var; 
        arr.push_back(var);
    }
    vector<int> temp(n-k+1, 0);
    int sum = 0;
    for(int i = 0; i< k;++i)
    {
        sum = sum + arr[i];
    }
    temp[0] = sum; 
    int m = sum; 

    for(int i = 0; i<n - k ; ++i)
    {
        sum = sum - arr[i] + arr[i + k];
        m = min(m, sum);
        temp[i+1] = sum; 
    }
    int count = 0; 
    for(auto i : temp)
    {
        if(i == m)
        {
            break;
        }
        count++;
    }
    cout<<count+1<<endl;
    return 0;
}

