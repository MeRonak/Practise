#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const int N = 1e5+5;
vector<int> adjlist[N];
bool visited[N];
void dfs(int start)
{
    if(visited[start]){return;}
    visited[start] = true; 
    for(auto child : adjlist[start])
    {
        dfs(child);
    }
}

int main(){
int n, m; 
cin>>n>>m; 
memset(visited, false, N);
for(int i = 0; i<m; ++i)
{
    int a, b; 
    cin>>a>>b; 
    adjlist[a].push_back(b); 
    adjlist[b].push_back(a);
}
int count  = 0; 
vector<int> random; 
for(int i = 1; i<=n; ++i)
{
    if(visited[i]) continue;
    dfs(i); 
    random.push_back(i);
    count++;
}
cout<<count-1<<endl;
for(int i = 0; i< random.size()-1; ++i)
{
    cout<<random[i]<<" "<<random[i+1]<<endl;
}
return 0;
}