#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; 
    cin>>str; 
    int l = str.length();
    vector<int> arr(l+1, 0);
    for(int i = 0; i<l-1;++i)
    {
        if(str[i] == str[i+1])
        {
            arr[i+1] = arr[i] + 1;
        }
        else{
            arr[i+1] = arr[i];
        }
    }
    int n; 
    cin>>n;
    while(n--)
    {
        int a, b; 
        cin>>a>>b;
        cout<<arr[b-1]-arr[a-1]<<endl;
    }
    
return 0;
}