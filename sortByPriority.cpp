#include<bits/stdc++.h>
using namespace std;

void sortByPrority(vector<int> &v){
    int left_ptr=0;
    int rignt_ptr=v.size()-1;
    while(left_ptr<rignt_ptr){
        if(v[left_ptr]%2==1 && v[rignt_ptr]%2==0){
            swap(v[left_ptr],v[rignt_ptr]);
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[rignt_ptr]%2==1){
            rignt_ptr--;
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);   
    }
    sortByPrority(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
