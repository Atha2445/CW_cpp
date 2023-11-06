#include<bits/stdc++.h>
using namespace std;

bool checkPrefixSufixSum(vector<int> &v){
    int totalSum=0;
    for(int i=0;i<v.size();i++){
        totalSum+=v[i];
    }
    
    int prefixSum=0;
    for(int i=0;i<v.size();i++){
        prefixSum+=v[i];
        int sufixSum = totalSum - prefixSum;
        
        if(sufixSum==prefixSum){
            return true;
        }
        
    }
    return false;
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
    cout<<checkPrefixSufixSum(v)<<endl;
    return 0;
}
