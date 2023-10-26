#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[]={24,7,4,12,45,1,10};
    int key,ans=-1;
    cin>>key; 
     for(int i=0;i<7;i++){
         if(array[i]==key){
             ans=i;
             break;
         }
     }
     cout<<ans<<endl;
    
    
    
    return 0;
}
