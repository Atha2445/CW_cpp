#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,r=1;
    cin>>n;
    
    for(i=1;i<=n;i++){
        r*=i;
    }
    cout<<r<<endl;
    return 0;
}
