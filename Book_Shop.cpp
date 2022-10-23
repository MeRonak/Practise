#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
bool check(int n )
{
    bool isprime = true;
    if(n<2){
        isprime = false;
    }
    else {
        for(int i = 2; i<n ; ++i)
        {
            if(n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    return isprime; 
}
int main(){
int n; cin>>n; 
bool flag = true; int i = 1; 
if(check(n))
{
    cout<<n<<endl;
}
else{
    while(flag)
    {
        if(check(n+i) && check(n-i))
        {
            cout<<n-i<<" " << n+i<<endl;
            flag = false;
        }
        else if(check(n-i))
        {
            cout<<n-i<<endl;
            flag = false;
        }
        else if(check(n+i)){
            cout<<n+i<<endl;
            flag = false;
        }
        i++;
    }
}
return 0;
}