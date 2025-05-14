#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void deleteatfirst(node *&head){
    node *todelete=head;
    head=head->next;
    delete(todelete);
}
void deletion(node *&head,int val){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
       deleteatfirst(head);
    }

    node *temp=head;
    while(temp->next->data !=val){
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete(todelete);


}
void insertatTail(node *&head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node *&head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node *head=NULL;
    int f;
    int value;
    cout<<"enter 1 : head \n";
    cout<<"enter 2 : tail \n";
    cout<<"enter 0 : exit \n";
    cin>>f;
    
    while(f==1 || f==2){
        cout<<"enter the value";
        cin>>value;
        if(f==1){
            insertathead(head,value);
        }
        if(f==2){
            insertatTail(head,value);
        }
        cout<<"continue?";
        cin>>f;
    }
    cout<<"calling for display"<<endl;
    display(head);
    //deletion(head,3);
    deleteatfirst(head);
    display(head);
    
    
    
    return 0;
}
