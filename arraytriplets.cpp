#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[6]={1,2,3,0,8,7};
    int sum=10,pairs=0;
    
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(array[i]+array[j]+array[k]==sum){
                    pairs++;  
                }
            }
            
        }
    }
    cout<<pairs<<endl;
    return 0;
}
