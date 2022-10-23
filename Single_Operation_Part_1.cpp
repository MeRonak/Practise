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
    int n;cin>>n; string s; cin>>s; int count = 0;
    // loop(i,n){cout<<s[i];}cout<<endl;
    for(int i = 1; i< s.length();++i)
    {
        if(s[i] == '0')
        {
            count++;
        }
        else{
            break;
        }
    }
    cout<<count+1<<endl;
}
return 0;
}