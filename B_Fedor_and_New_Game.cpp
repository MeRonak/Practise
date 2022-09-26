#include<bits/stdc++.h>
using namespace std;
int func(int temp)
{
    int count = 0;
    while(temp)
    {
        count += temp&1;
        temp >>=1;
    }
    return count;
}
int main(){
    int n, m , k; 
    cin>>n>>m>>k;
    vector<int> arr;
    for(int i = 1; i<= m+1; ++i)
    {
        int temp; 
        cin>>temp;
        arr.push_back(temp);
    }
    int count = 0;
    for(int i = 0;i < arr.size()-1; ++i)
    {
        arr[i] = arr[i] ^ arr[arr.size()-1];
        if(func(arr[i]) <=k)
        {
            count++;
        }
    }
    cout<<count<<endl;

    
return 0;
}   