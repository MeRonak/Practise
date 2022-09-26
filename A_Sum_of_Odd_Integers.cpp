#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    while(n--)
    {
        long long int a, b; 
        cin>>a>>b;
        if((a%2 == b%2) && (a >= b*b))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}