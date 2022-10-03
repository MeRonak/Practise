#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int a,b,c,d; cin>>a>>b>>c>>d; 
if(a == c)
{
    int y_len = abs(d-b);
    cout<<a-y_len<<" "<<b<<" "<<a-y_len<<" "<<d;
}
else if(b == d)
{
    int x_len = abs(a-c);
    cout<<a<<" "<<b-x_len<<" "<<c<<" "<<d-x_len; 
}
else{
    // if(a==b && c==d)
    // {
        if(abs(c-a) != abs(d-b)){cout<<-1<<endl;}
        else{cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;}
    
    // else{
    //     cout<<-1<<endl;
    // }
}
return 0;
}