#include<bits/stdc++.h>
using namespace std;
int main(){
    int T; 
    cin>>T; 
    while(T--)
    {
        int n; 
        cin>>n;
        int odd = 0; 
        vector<int> arr;
        if(n == 0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        // unordered_map<int, int> oddd; 
        // unordered_map<int, int> even;
  
        while(n--)
        {
            int temp; 
            cin>>temp; 
            arr.push_back(temp);
            
            if(temp%2 == 1)
            {
                odd++;
                // oddd[temp]++;
            }
            
        }
        sort(arr.begin(), arr.end());
        if(odd%2 == 0)
        {
            cout<<"YES"<<endl;
        
            continue;
        }
        else
        {
            bool flag = false;
            for(int i = 1; i<arr.size(); ++i)
            {
                if(arr[i] == arr[i-1]+1)
                {
                    cout<<"YES"<<endl;
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
return 0;
}