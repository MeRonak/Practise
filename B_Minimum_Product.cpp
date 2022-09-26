#include<bits/stdc++.h>
using namespace std;
int main(){
int T; 
cin>>T; 
while(T--)
{
    long long int a, b, x, y, n; 
    cin>>a>>b>>x>>y>>n;
    cout<<min(max(x, a-n)*max(y, b-n+min(n, a-x)),max(y, b-n)*max(x, a-n+min(n, b-y)))<<endl;
}
return 0;
}