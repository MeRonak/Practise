#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n; cin>>n; 
int odd = 0; int even = 0; 
int oc = 0; int ec = 0;
loop(i,n)
{
    int temp; cin>>temp; 
    if(temp %2 == 0)
    {
        even++; ec = i+1;
    }
    else{
        odd++;
        oc = i+1;
    }

}
if(even > odd)
{
    cout<<oc<<endl;
}
else{
    cout<<ec<<endl;
}
return 0;
}