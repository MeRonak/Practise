#include<bits/stdc++.h>
using namespace std;
int main(){
int T; 
cin>>T; 
while(T--)
{
    int n; 
    cin>>n; 
    unordered_map<int, int> arr; 
    arr.clear(); 
    int random=-1;
    int flag = true;
    while(n-- && flag)
    {
        int temp; 
        cin>>temp;
        arr[temp]++;
        if(arr[temp] >= 2)
        {
            if(arr[temp]>=3)
            {
                cout<<"YES"<<endl;
                arr.clear();
                flag = false; 
                continue;
            }
            else{
                if(temp != random)
                {
                    cout<<"YES"<<endl;
                    arr.clear();
                    flag = false;
                    continue;
                }
            }
        }  
        random = temp;
    }
    if(flag){
    cout<<"NO"<<endl;
    arr.clear();
    }
    // flag = true;  
}

return 0;
}