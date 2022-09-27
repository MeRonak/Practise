#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int T; 
cin>>T; 
while(T--)
{
    int n, x; cin>>n>>x; 
    ll sum = 0;
    bool flag = true;
    v arr; for(int i = 0; i< n ; ++i){int temp; cin>>temp; arr.push_back(temp); sum += temp;}
    sort(arr.begin(), arr.end());
    if(sum/n >= x){
        cout<<n<<endl;
        flag = false;
        continue;
    }
    else{
        for(int i = 0; i< n-1 ; ++i)
        {
            sum -= arr[i]; 
            if(sum / (n - i - 1) >= x)
            {
                cout<<n-i-1<<endl;
                flag = false;
                break;
            }

        }
        if(flag == false)
        {
            continue;
        }
    }
    if(flag){
        cout<<0<<endl;
    }
}
return 0;
}