#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6,7};
    int n=7,k=3,j=0;
    k=k%n;
    
    int ans[7];
    for(int i=n-k;i<=n;i++){
        ans[j++]=array[i];
    }
    for(int i=0;i<k;i++){
        ans[j++]=array[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
