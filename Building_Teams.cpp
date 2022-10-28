#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e5+7; 
vector<int> adjlist[N]; 
int team[N];
bool visited[N];
void dfs(int start)
{
    if(visited[start] == true)
    {
        return;
    }
    visited[start] = true; 
    for(auto child : adjlist[start])
    {
        // team2.push_back(child); 
        team[child] = 2;
        dfs(child);
    }
}
int main(){
int n,m; cin>>n>>m; 
// team2.clear();
memset(visited, false, N);
for(int i = 0; i<m ; ++i)
{
    int a, b; cin>>a>>b; 
    adjlist[a].push_back(b); 
    adjlist[b].push_back(a); 
}
int count = 0; 
vector<int> temp1; 
for(int i = 1; i<=n ; ++i)
{
    if(visited[i] == true)continue;
    dfs(i); 
    team[i] = 1;
}
for(int i = 1; i<=n; ++i)
{
    cout<<team[i]<<" ";
}
cout<<endl;
return 0;
}