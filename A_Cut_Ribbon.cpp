#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int n,a,b,c; 
cin>>n>>a>>b>>c; 
int ans = 0;
for(int x = 0; x<=4000; ++x)
{
    for(int y = 0 ; y<=4000; ++y)
    {
        int cz = n - (a*x+b*y);
        if(cz < 0)
        {
            break;
        }
        double z = cz / (double)c;
        if(z == (int)z)
        {
            ans = max(ans, x+y+(int)z);
        }
    }
}
cout<<ans<<endl;
return 0;
}