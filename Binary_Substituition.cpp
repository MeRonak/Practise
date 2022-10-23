#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
const ll N = 998244353998244353;
int main(){
int T; cin>>T; 
while(T--)
{
    string s; cin>>s; 
    ll temp = s.length();
    int i = 0; 
    int j = 1;
    ll count = 0;
    while(j < temp)
    {
        if(s[i] == 'a' && s[j] == 'b')
        {
            count = (count+2)%N;
        }
        else if(s[i] == 'b' && s[j] == 'a')
        {
            count = (count+2)%N;
        }
        i++;
        j++;
    }
    if(count == 0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<(count)%N<<endl;
    }

}
return 0;
}