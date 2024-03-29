#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void IAH(node*& head,int data){
    node* newNode=new node(data);
    newNode->next=head;
    head=newNode;
}
void IAT(node*& tail,int data){
    node* newNode=new node(data);
    tail->next=newNode;
    tail=newNode;
}
void IAP(node*&head,int data,int p){
    if(p==1){
        IAH(head,data);
        return;
    }
    node* newNode=new node(data);
    node*temp=head;
    int c=1;
    while(c<p-1){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void print(node*& head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }

    node* node1=new node(arr[0]);
    node* head=node1;
    node* tail=node1;
    
    // print(head);
    // IAH(head,3);
    // print(head);
    // IAH(head,1);
    // print(head);
    // IAT(tail,5);
    // print(head);
    // IAP(head,2,2);
    // print(head);



    
}
