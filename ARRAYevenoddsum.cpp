#include<iostream>
#include<vector>
using namespace std;

int main(){
    int array[6];
    int add=0;
    for(int i=0;i<6;i++){
        cin>>array[i];
        if(i%2==0){
            add+=array[i];
        }
        else{
            add-=array[i];
        }
    }
    cout<<add<<endl;
    
    return 0;
}
