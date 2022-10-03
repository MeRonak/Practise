#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
ll a, b, c; 
cin>>a>>b>>c; 
ll volume =(ll)(a*b)*(ll)c;
volume = pow(volume , 1/2.0);
ll one = volume/a; 
ll two = volume/b; 
ll three = volume/c; 
cout<<(one + two + three)*4<<endl;
return 0;
}