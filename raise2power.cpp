#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,r=1;
    cin>>a>>b;
    
    for(i=0;i<b;i++){
        r*=a;
    }
    cout<<r<<endl;
    return 0;
}
