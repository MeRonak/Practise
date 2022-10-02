#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int a; int b; cin>>a>>b; 
int count = 0;
while((a >=2 && b>=1) || (b >=2 && a >=1))
{
    if(a > b)
    {
        a = a-2;
        b++;
    }
    else{
        b = b-2; 
        a++;
    }
    count++;
}
cout<<count<<endl;
return 0;
}