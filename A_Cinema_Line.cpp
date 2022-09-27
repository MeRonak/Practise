#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin>>n; 
vector<int> arr; 
unordered_map<int , int > m;
for(int i = 0; i<n;++i){
    int temp; cin>>temp;
    if(i == 0 && temp != 25)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    m[temp]++;
    arr.push_back(temp-25);
    if(arr[i] == 0)
        {
            continue;
        }
        if(arr[i] == 25)
        {
            if(m[25] > 0)
            {
                m[25]--;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        if(arr[i] == 75)
        {
            if(m[50] > 0 && m[25] >0)
            {
                m[50]--;
                m[25]--;
            }
            else if(m[25] >=3)
            {
                m[25] -= 3;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
}
cout<<"YES"<<endl;
return 0;
}