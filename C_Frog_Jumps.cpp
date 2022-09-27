#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int n; 
cin>>n;
while(n--)
{
    string s;
    cin>>s; 
    int t = s.length();
    v arr; 
    int i = 1;
    arr.push_back(0);
    while(t--)
    {
        if(s[i-1] == 'R')
        {
            arr.push_back(i);
        }
        i++;
    }
    arr.push_back(s.length()+1);
    int ans = 0; 
    for(int i = 0; i< arr.size()-1; ++i)
    {
        ans = max(ans,arr[i+1] - arr[i]);
    }
    cout<<ans<<endl;
}
return 0;
}