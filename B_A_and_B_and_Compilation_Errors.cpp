#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 
    int r = n-1;
    int y = n -2;
    long long int sum = 0; 
    while(n--)
    {
        int temp; 
        cin>>temp;
        sum = sum + temp; 
    }
    long long int suma = sum;
   
    while(r--)
    {
        int temp; 
        cin>>temp; 
        sum = sum - temp;
    }

    while(y--)
    {
        int temp; 
        cin>>temp;
        suma = suma - temp;
    }
    cout<<sum<<endl;
    cout<<suma - sum<<endl;

return 0;
}