//code to print first number which is divisible both 5 and 7

#include<bits/stdc++.h>
using namespace std;
 int main(){

   int i=5;
   while(true){
     if(i%7 == 0){
       cout<<i<<endl;
       break;
     }
     i+=5;
   }

   return 0;
 }
