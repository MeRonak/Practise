#include<bits/stdc++.h>
using namespace std;
int main(){
int T; 
cin>>T; 
while(T--)
{
    long long int a,b; 
    cin>>a>>b;
    cout<<min(min(a, b) , (a+b)/3)<<endl;
}
return 0;
}