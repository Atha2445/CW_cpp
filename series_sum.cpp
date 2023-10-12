#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,r=0;
    cin>>n;
    
    for(i=1;i<=n;i++){
        if(i%2==0){
            r-=i;
        }
        else{
            r+=i;
        }
        
    }
    cout<<r<<endl;
    return 0;
}
