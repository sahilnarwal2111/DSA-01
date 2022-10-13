#include<iostream>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int q=n;
    stringstream stream;
    string str ;
    while(q!=0){
    int q = q/2;
    int digit = n%2;
    stream<<digit;
    stream>>str;
    
    }
    cout<<str<<endl;

    return 0;
}