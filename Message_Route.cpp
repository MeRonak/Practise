#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e5+7; 
vector<int> adjlist[N]; 
bool visited[N]; 
vector<int> dis(N,-1);
int main(){
int n, m; cin>>n>>m;
memset(visited, false, N); 
// memset(distance, -1, N); 
// for(int i = 1; i<N; ++i)
// {
//     distance[i] = 0;
// }
for(int i = 0; i< m; ++i)
{
    int a, b; cin>>a>>b;
    adjlist[a].push_back(b); 
    adjlist[b].push_back(a); 
}
dis[1] = 0; 
visited[1] = true; 
queue<int> q; 
q.push(1); 
vector<int> parent(n+1);
parent[1] = 1;
while(!q.empty())
{
    int start = q.front(); q.pop(); 

    for(auto child : adjlist[start])
    {
        if(visited[child]== true){continue;}
        visited[child] = true; 
        dis[child] = dis[start] + 1;
        // if(child == n)
        // {
        //     cout<<dis[child]+1<<endl;
        //     break;
        // }
        parent[child] = start;
        q.push(child); 
    }
}
if(dis[n] == -1)
{
    cout<<"IMPOSSIBLE"<<endl;
}else{
    // cout<<dis[n]+1<<endl;
    int node = n; 
    vector<int> ans; 
    while(parent[node] != node)
    {
        ans.push_back(node); 
        node = parent[node];
    }
    ans.push_back(1); 
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto temp : ans)
    {
        cout<<temp<<" ";
    }cout<<endl;
}
return 0;
}