#include<iostream>
#include <cmath>
using namespace std;

int main()
    
{
    int n;
    cin>>n;
    int sum = 0;
    int originaln = n;
    while(n>0){
        int digit = n%10;
        sum+= pow(digit,3);
        n/=10;
        // cout<<digit<<endl;
    }
    if(sum==originaln) cout<<"Amrstrong Number"<<endl;
    else cout<<"Non Armstrong Number"<<endl;
    return 0;
}
