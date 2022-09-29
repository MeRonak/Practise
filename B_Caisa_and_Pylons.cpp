#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
#define ll long long
int main(){
int N; cin>>N; v arr;arr.push_back(0); for(int i = 0; i< N; ++i){
    int temp; cin>>temp; arr.push_back(temp);
}
int energy = 0; 
int money = 0;
for(int i = 0; i< arr.size()-1;i++)
{
    energy = energy - (arr[i+1]- arr[i]);
    if(energy < 0)
    {
        money = money + abs(energy);
        energy = 0;
    }
}
cout<<money<<endl;
return 0;

}