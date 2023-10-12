#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int d=0;
    while(n>0){
        d++;
        n=n/10;
    }
    cout<<d<<endl;
    return 0;
}
