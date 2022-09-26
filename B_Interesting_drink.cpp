#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int main()
{
   int n; 
   cin>>n; 
   int m = 0; 
   vector<int> arr(N, 0);
   for(int i = 0; i<n;++i)
   {
        int var; 
        cin>>var;
        m = max(m, var);
        arr[var]++;
   }
   for(int i = 1; i< N; ++i)
   {
        arr[i] = arr[i-1]+arr[i];
   }
   int q; 
   cin>>q;
   while(q--)
   {
    int temp; 
    cin>>temp;
    if(temp > N)
    {
        cout<<arr[m]<<endl;
    }
    else{ cout<<arr[temp]<<endl;}
   }
   return 0;
}