#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n; cin>>n; 
unordered_map<string, int> data; 
while(n--)
{
    string name; cin>>name; 
    if(data.find(name) == data.end())
    {
        cout<<"OK"<<endl;
        data[name]++;
    }
    else{
        cout<<name<<data[name]<<endl;
        data[name]++;
    }

}
return 0;
}