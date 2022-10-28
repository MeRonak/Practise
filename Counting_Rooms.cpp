#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int visited[1001][1001];
int x[4] = {1,-1,0,0};
int y[4] = {0,0,-1,1};
int n,m ; 
void dfs(int i, int j)
{
    visited[i][j] = 1;
    for(int k = 0; k<4; ++k)
    {
        int newx = i + x[k]; 
        int newy = j + y[k]; 
        if(newx >= 0 && newx < n && newy >=0 && newy < m && visited[newx][newy] != 1)
        {
            dfs(newx, newy);
        }
    }
}
int main(){
// int n,m; 
cin>>n>>m;  
loop(i, n)
{
    for(int j = 0; j<m; ++j)
    {
        char random; cin>>random; 
        if(random == '#')
        {
            visited[i][j] = 1;
        }
        else{
            visited[i][j] = 0;
        }
    }
}int count = 0;
for(int i = 0; i<n; ++i)
{
    for(int j = 0; j<m; ++j)
    {
        if(visited[i][j] != 1)
        {
            dfs(i,j);
            count++;
        }
    }
}
cout<<count<<endl;
// int count = 0;
return 0;
}