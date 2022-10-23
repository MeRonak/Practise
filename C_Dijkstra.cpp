#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n,m; cin>>n>>m; 
vector<pair<int, int>> adjlist[n+1];
for(int i = 0; i<m; ++i)
{
    int a, b, w; 
    cin>>a>>b>>w; 
    adjlist[a].push_back({b,w}); 
    adjlist[b].push_back({a,w});
}
priority_queue<pair<int, int>> queue; 
int distance[n+1]; 
int parent[n+1]; 
for(int i = 1; i<=n;++i)
{
    parent[i] =i;
}
for(int i = 1; i<=n; ++i)
{
    distance[i] = INT_MAX;
}
distance[1] = 0; 
queue.push({0,1}); 
// bool processed[n+1]; 
// for(int i = 1; i<=n; ++i)
// {
//     processed[i] = false;
// }
while(!queue.empty())
{
    int a = queue.top().second;
    queue.pop(); 
    // if(processed[a] == true){
    //     continue;
    // }
    // processed[a] = true;
    for(auto b : adjlist[a])
    {
        int u = b.first; 
        int w = b.second;
        if(distance[u] > distance[a] + w)
        {
            distance[u] = distance[a]+w; 
            queue.push({-1*distance[u], u}); 
            parent[u] = a;
            // processed[b] = true;
        }
    }
}
if(distance[n] == INT_MAX)
{
    cout<<-1<<endl;
}
else{
    vector<int> path; 
    int temp = n; 
    while(parent[temp] != temp)
    {
        path.push_back(temp); 
        temp = parent[temp];
    }
    path.push_back(1);
    reverse(path.begin(), path.end()); 
    for(auto l : path)
    {
        cout<<l<<" ";
    }
    // cout<<distance[n]<<endl;
}
return 0;
}   