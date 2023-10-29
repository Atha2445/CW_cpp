#include<bits/stdc++.h>
using namespace std;

int sle(int array[],int size){
    int max=INT_MIN;
    int sm=INT_MIN;
    
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    
    for(int i=0;i<size;i++){
        if(array[i]>sm && array[i]!=max){
            sm=array[i];
        }
    }
    
    return sm;

    }

int main(){
    
    int array[]={1,2,3,4,9,8,7};
    int size = 7;
    
    cout<<sle(array,size)<<endl;
    
    return 0;
}
