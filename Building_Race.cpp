#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
#define minheap priority_queue<int, vector<int>, greater<int>>
#define maxheap priority_queue<int>
#define loop(i, n) for(int i = 0; i< n ; ++i)
int main(){
int T; cin>>T; while(T--)
{
    float a, b, x, y; 
    cin>>a>>b>>x>>y;
    float chef = 0; float chefina = 0; 
    while(a > 0)
    {
        if(a < x)
        {
            chef = chef + (a/x); a= 0;
        }
        else{a = a - x; 
        chef++;
}    }
    while(b > 0)
    {
        if(b < y)
        {
            chefina = chefina + (b/y);
            b = 0;
        }
       else{ b = b - y; 
        chefina++;}
    }
    // cout<<chef<<" "<<chefina<<" ";
    if(chef == chefina)
    {
        cout<<"Both"<<endl;
    }
    else if(chef > chefina)
    {
        cout<<"Chefina"<<endl;
    }
    else{
        cout<<"Chef"<<endl;
    }
}
return 0;
}