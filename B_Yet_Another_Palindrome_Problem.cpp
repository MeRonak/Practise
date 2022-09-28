#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int T; 
cin>>T; 
while(T--)
{
    int n; 
    cin>>n; 
    vector<int> arr(n,0);
    for(int i = 0; i<n; ++i)
    {
        int temp; 
        cin>>temp; 
        arr[i]  = temp;
    }
    bool flag = false;
    for(int i = 0; i< n; ++i)
    {
        for(int j = i+2; j<n; ++j)
        {
            if(arr[i] == arr[j])
            {
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    if(!flag){
    cout<<"NO"<<endl;}
}
return 0;
}