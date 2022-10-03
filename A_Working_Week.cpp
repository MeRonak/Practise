#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n; n = n - 3; 
    int a = 1; 
    int b = (n)/3;
    int c = n - a - b; 
    cout<<min(abs(a-b), min(abs(b-c), abs(c-a)))<<endl;
}
return 0;
}