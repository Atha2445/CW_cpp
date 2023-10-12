#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    
    while(n>0){
        int l=n%10;
        cout<<l;
        
        n=n/10;
    }
    
    return 0;
}
