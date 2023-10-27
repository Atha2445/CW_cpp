#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> n(6);
    for(int i=0;i<6;i++){
        cin>>n[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;
    
    int count=0;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==x){
            count +=1;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
