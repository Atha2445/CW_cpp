#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,6,7,8,9};
    int k;
    cin>>k;
    k=k%v.size();
    
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    
    return 0;
}
