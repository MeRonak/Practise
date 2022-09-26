#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+10;
int main(){
    int t;
    cin>>t; 
    while(t--)
    {
        int n; 
        cin>>n; 
        vector<int> arr(N, 0);
        int x = 0; 
        int y = 0;
        while(n--)
        {
            int temp; 
            cin>>temp; 
            arr[temp]++;
            if(arr[temp] == 1)
            {
                x++;
            }
            y = max(y, arr[temp]);
        }
        cout<<max(min(x, y-1), min(x-1, y))<<endl;

    }
return 0;
}