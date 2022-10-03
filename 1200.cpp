#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
ll n; cin>>n; ll sum = 0; string ans = "";
while(n){int random = n%10; if(random > 9- random){ans= ans + to_string(9-random);}else{ans = ans + to_string(random);} n = n/10;}
// cout<<ans<<" ";
if(ans[ans.length()-1] == '0')
{
    ans[ans.length()-1] = '9';
}
reverse(ans.begin(), ans.end()); loop(i , ans.length()){sum = sum * 10; sum += (ans[i]-'0');}
cout<<sum<<endl;
return 0;
}