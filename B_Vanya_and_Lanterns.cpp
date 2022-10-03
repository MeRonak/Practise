#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
long double n, l ; 
cin>>n>>l; vector<long double> arr(n,0); loop(i, n){long double temp; cin>>temp; arr[i] = temp;}
long double m_dist = 0;
sort(arr.begin(), arr.end());
loop(i, n-1){m_dist = max(arr[i+1]-arr[i], m_dist);}
long double random = m_dist/2.0;
long double var = arr[0];
long double temp = l - arr[n-1];
cout<<setprecision(10)<<max(random, max(var, temp))<<endl;
return 0;
}