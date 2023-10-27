//push_back is used to add element at back.
//resize is used change the size.
//pop_up is used for delete element.




#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    a.push_back(1);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    a.push_back(2);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    a.push_back(3);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    a.resize(5);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
    return 0;
}
