#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n; cin>>n;
int count =0 ; unordered_map<int, int> ran; loop(i, n){int temp; cin>>temp; ran[temp]++; count = max(count, ran[0] - ran[1]);}
cout<<count<<endl;
return 0;
}