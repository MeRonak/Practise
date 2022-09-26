#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m; 
    unordered_map<int, int> a; 
    vector<int> arr(n,0);
    vector<int> str;
    for(int i = 0; i< n; ++i)
    {
        int temp; 
        cin>>temp; 
        str.push_back(temp);
    }
    for(int i = n-1; i>=0; i--)
    {
        a[str[i]]++;
        arr[i] = a.size();
    }
    while(m--)
    {
        int var; 
        cin>>var; 
        cout<<arr[var-1]<<endl;
    }
return 0;
}