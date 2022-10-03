#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T;cin>>T; while(T--){int n; cin>>n; v arr(n,0); loop(i ,n){int temp; cin>>temp; arr[i] = temp;}
int count = 0; 
int temp = 2*arr[0]-1;
loop(i, n){
if(i == 0)
{
    continue;
}
else{
    if(arr[i] > temp)
    {
        count = count + arr[i]/(temp);
        if(arr[i]%(temp) == 0)
        {
            count--;
        }
    }
}
}
cout<<count<<endl;
}
return 0;
}