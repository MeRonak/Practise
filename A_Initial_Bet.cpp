#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int c1, c2, c3, c4, c5; 
cin>>c1>>c2>>c3>>c4>>c5;
int sum = c1+c2+c3+c4+c5; 
if(sum == 0)
{
    cout<<-1<<endl;
}
else if(sum % 5 != 0)
{
    cout<<-1<<endl;
}

else{

    cout<<(sum/5)<<endl;
}
return 0;
}