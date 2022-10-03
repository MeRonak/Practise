#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int sign(int a)
{
    return (a>0)?1:-1;
}
int main(){
int T; cin>>T; while(T--){
    int n; cin>>n;v arr(n, 0); loop(i , n){int temp; cin>>temp; arr[i] = temp;} ll ans = 0; 
        loop(i,n){
            int cur = arr[i];
            int j = i; 
            while(j < n && sign(arr[i]) == sign(arr[j]))
            {
                cur = max(cur, arr[j]);
                j++;
            }
            i = j-1; 
            ans = ans  + cur;
        }
        cout<<ans<<endl;
    }

return 0;
}   