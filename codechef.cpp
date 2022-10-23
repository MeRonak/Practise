#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
 int binaryGap(int N) {
        int res = 0;
        for (int d = -32; N; N /= 2, d++)
            if (N % 2) res = max(res, d), d = 0;
        return res;
    }
int main(){
    int n; cin>>n;
    if(binaryGap(n) == 0)
    {
        cout<<binaryGap(n)<<endl;
    }
else{cout<<binaryGap(n)-1<<endl;}
return 0;
}