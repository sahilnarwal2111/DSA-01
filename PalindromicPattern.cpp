#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = n-i;j>=0;j--){
            cout<<"  ";
            
        }
        int count = i;
        for(int k = 1; k<=(2*i-1);k++){
            cout<<count<<" ";
            if(count>1) count--;
            else count++;
        }
        cout<<endl;
    }
    return 0;
}
