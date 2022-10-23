#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int func(int random)
{
    int count = 0; 
    int temp = random % 10; 
    random = random / 10;
    while(random)
    {
        if(random % 10 == temp)
        {
            count++;
        }
        else{
            break;
        }
        random = random / 10;
    }
    return count+1;
}
int main(){
int T; cin>>T; while(T--)
{
    int n; cin>>n; 
    int b = n % 11; 
    int a = n - 111 * b; 
    if(a >=0 && a%11 == 0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
// cout<<func(8889)<<endl;
return 0;
}