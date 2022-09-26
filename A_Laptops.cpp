#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    vector<pair<int, int>> arr;
    while(n--)
    {
        int a, b; 
        cin>>a>>b;
        arr.push_back(make_pair(a, b));
    }
    sort(arr.begin(),arr.end());
    bool flag = true;
    for(int i = 0; i<arr.size()-1; ++i)
    {
        if(arr[i].second > arr[i+1].second)
        {
            flag = false;
            cout<<"Happy Alex"<<endl;
            break;
        }
    }
    if(flag)
    {
        cout<<"Poor Alex"<<endl;
    }
return 0;
}