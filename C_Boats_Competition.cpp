#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int func(int sum, v arr)
{
    unordered_map<int, int> random; 
    loop(i, arr.size())
    {
        random[arr[i]]++;
    }
    int count = 0;
    v temp; loop(i, arr.size())
    {
        int var = sum - arr[i];
        temp.push_back(var);
        if(random.find(var) != random.end())
        {
            count++;
            random[var]--;
            if(random[var] == 0)
            {
                random.erase(var);
            }
        }


    }
    return count/2;
}
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n; v arr(n,0); loop(i,n){cin>>arr[i];}
    int ans = INT_MIN;
    for(int i = 2; i<= 2*n; ++i)
    {
        ans = max(ans, func(i, arr));
    }
    cout<<ans<<endl;
}
return 0;
}