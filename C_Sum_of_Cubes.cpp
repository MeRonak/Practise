#include<bits/stdc++.h>
using namespace std;
int main(){
long long int N = 1e12; 
unordered_map<long long int,long long int> m; 
for(long long int i = 1;i*i*i<=N; i++)
{
    m[i*i*i] = i; 
}
long long int T;
cin>>T; 
while(T--)
{
    long long int x; 
    cin>>x; 
    bool flag = false;
    for(long long int i = 1; i*i*i<=x; ++i)
    {
        
        if( m.find(x-i*i*i)!=m.end())
        {
            cout<<"YES"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)

   { cout<<"NO"<<endl;}
}
return 0;
}