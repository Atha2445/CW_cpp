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
    
    int occurance=-1;
    for(int i=0;i<n.size();i++){
        if(n[i]==x){
            occurance=i;
        }
    }
    cout<<occurance<<endl;
    
    return 0;
}
