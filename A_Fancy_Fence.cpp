#include<bits/stdc++.h>
using namespace std;
int main(){
    int T; 
    cin>>T; 
    while(T--)
    {
        int angle; 
        cin>>angle;
        if(360%(180-angle) == 0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}