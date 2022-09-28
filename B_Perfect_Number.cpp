#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long longs
bool func(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += (n%10);
        n = n/10;
    }
    if(sum == 10)
    {
        return true;
    }
    return false;
}
int main(){
int k; cin>>k; 
int start = 19;
int constant = 9;
if(k == 1)
{
    cout<<19<<endl;
}
else{
for(int i = 2 ;i<=k ;++i)
{   
    start = start + constant; 
    while(!func(start))
    {
        start += constant;
    }
}
cout<<start<<endl;
}
return 0;
}