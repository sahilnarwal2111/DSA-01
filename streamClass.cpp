#include<iostream>
#include <sstream>
using namespace std;

int main()
{
    stringstream stream;
    stream<<10;
    string str;
    stream>>str;

    return 0;
}