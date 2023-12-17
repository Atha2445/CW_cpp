#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int n;
    cin>>n;
    
	vector<int> a;
	for(int i=0;i<n;i++){
	    int ele;
	    cin>>ele;
	    a.push_back(ele);
	}
	sort(a.begin(),a.end());
	for(int num:a){
	    cout<<num<<" ";
	}
	cout<<endl;
	
	return 0;
}
