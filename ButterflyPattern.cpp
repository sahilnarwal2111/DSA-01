#include<iostream>
using namespace std;

int main()
    
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j =1; j<=n*2;j++){
            if(j<=i || j>=(n*2-i)){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i =n;i>0;i--){
        for(int j =1; j<=n*2;j++){
            if(j<=i || j>=(n*2-i)){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
