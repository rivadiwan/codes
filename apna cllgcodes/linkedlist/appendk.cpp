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
int length(node*head){
    node *temp=head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node *appendk(node*&head,int k){
    node *tail=head;
    node *newtail;
    node *newhead;
    int l=length(head);
    k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;
     return(newhead);
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
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    display(head);
    node*newhead=appendk(head,2);
    display(newhead);
    return 0;

}