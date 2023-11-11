#include<bits/stdc++.h>
using namespace std;

int maximumOnesRows(vector<vector<int> > &v){
    int maxOnes=INT_MIN;
    int maxOnesRows=-1;
    int columns =v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberOfOnes = columns - j;
                if(numberOfOnes > maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRows=i;
                }
                break;
            }
        }
    }
    return maxOnes;
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
    int res=maximumOnesRows(vec);
    cout<<res<<endl;
    
    return 0;
}
