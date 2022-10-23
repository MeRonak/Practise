#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n, m; cin>>n>>m; 
vector<tuple<int,  int, int>> edges; 
for(int i = 0; i<m; ++i)
{
    int a, b, c; 
    cin>>a>>b>>c;
    edges.push_back({a,b,c});
}
int distance[n+1];
for(int i =1; i<=n; ++i)
{
    distance[i] = INT_MAX;
} 
distance[1] = 0; 
for(int i = 1; i<= n-1; ++i)
{
    bool flag = false;
    for(auto e : edges)
    {
        int a, b , c; 
        tie(a,b,c) = e;
        if(distance[b] > distance[a]+c){
            distance[b] = distance[a]+c;
            flag = true;
        }
    }
    if(!flag)
    {
        break;
    }
}
for(int i = 1; i<=n; ++i)
{
    if(distance[i] == INT_MAX)
    {
        cout<<30000<<" ";
    }
    else cout<<distance[i]<<" ";
}
return 0;
}