#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e5+7;
v adjlist[N]; 
bool visited[N]; 
int cycle_start = -1; 
int cycle_end = -1 ;
int parent[N];
bool dfs(int start, int start_parent)
{
    if(visited[start])
    {
        return false;
    }
    visited[start] = true;
    for(auto child : adjlist[start])
    {
        if(child == start_parent)
        {
            continue;
        }
        if(visited[child]){
            cycle_start = child; 
            cycle_end = start;
            return true;
        }
        parent[child] = start; 
        if(dfs(child, parent[child])){return true;}
    }
    return false;
}
int main(){
int n, m ; 
cin>>n>>m; 
memset(visited, false, N);
memset(parent, -1,N);
for(int i = 0; i<m ; ++i)
{
    int a, b; 
    cin>>a>>b; 
    adjlist[a].push_back(b); 
    adjlist[b].push_back(a);
}
for(int i = 1; i<=n; ++i)
{
    if(visited[i] == false && dfs(i, parent[i]))
    {
        break;
    }
}
if(cycle_start == -1)
{
    cout<<"IMPOSSIBLE"<<endl;
}
else{
    v ans;
    ans.push_back(cycle_start); 
    for(int i = cycle_end; i!= cycle_start; i = parent[i])
    {
        ans.push_back(i);
    }
    ans.push_back(cycle_start);
    cout<<ans.size()<<endl;
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

return 0;
}