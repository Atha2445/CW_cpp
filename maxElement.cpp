#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[]={24,7,4,12,45,1,10};
    int max=array[0];
    for(int i=1;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    
    
    
    return 0;
}
