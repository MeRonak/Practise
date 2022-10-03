#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n;cin>>n; v boys(n, 0); loop(i, n){int temp; cin>>temp; boys[i] = temp;}
int m;cin>>m; unordered_map<int, int> girls; loop(i , m){int temp; cin>>temp; girls[temp]++;}
sort(boys.begin(), boys.end());
int count = 0; 
loop(i, n){
    if(girls.find(boys[i]-1) != girls.end())
    {
        girls[boys[i]-1]--;
        if(girls[boys[i]-1] == 0){girls.erase(boys[i]-1);}
        count++;
    }
    else if(girls.find(boys[i]) != girls.end())
    {
        girls[boys[i]]--;
        if(girls[boys[i]] == 0){girls.erase(boys[i]);}
        count++;
    }
    else if(girls.find(boys[i]+1) != girls.end())
    {
        girls[boys[i]+1]--;
        if(girls[boys[i]+1] == 0)
        {
            girls.erase(boys[i]+1);
        }
        count++;
    }
}

cout<<count<<endl;
return 0;
}