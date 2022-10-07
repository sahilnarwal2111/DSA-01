#include<iostream>
using namespace std;
int main(){
   
    /*
    //Pre incrementer//
    b = ++a;//Increment instantly
    cout<<a<<" "<<b<<endl;


    //Post incrementer//
    b = a++;
    cout<<a<<" "<<b<<endl;
    */

   /*
   int i = 1;
    //1  // 3
   i = i++ + ++i;
    */

   /*
   int i = 1;
   int j = 2;
   int k;
   k = i + j + i++ + j++ + ++i + ++j;
    // 1   2   1     2       3     4 
    cout<<i<<" "<<j<<" "<<" "<<k<<endl;
    */

   /*
   int i = 0;
    // 0       0     1   1 
   i = i++ - --i + ++i - i--;
    */


   /*
   int i = 1, j = 2, k = 3;
        // 1     2     3 
   int m = i-- - j-- - k--;

   cout<<i<<endl; //0
   cout<<j<<endl; //1
   cout<<k<<endl; //2
   cout<<m<<endl; //6
   */

  int i=10, j=20, k;
  //  10    9      19    20    9      20    10  19
  k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;




    return 0;
} 