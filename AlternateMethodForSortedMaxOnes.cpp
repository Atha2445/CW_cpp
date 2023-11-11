#include<bits/stdc++.h>
using namespace std;

int leftMostRows(vector<vector<int> >&v){
    int leftMostOne=-1;
    int maxOnesRow =-1;
    int j=v[0].size()-1;

    while(j>=0 && v[0][j]==1){
        leftMostOne=j;
        maxOnesRow=0;
        j--;
    }
    
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            leftMostOne=j;
            j--;
            maxOnesRow=i;
        }
    }
    return maxOnesRow;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> >vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int res=leftMostRows(vec);
    cout<<res<<endl;
    
    return 0;
}
