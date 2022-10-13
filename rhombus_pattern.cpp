#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=5;i++){
        for(int j = n-i;j>=0;j--){
            cout<<" ";
        }
        for(int k = 1; k<=n;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}