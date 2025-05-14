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
node * reverse(node *&head){
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;

         currptr->next=prevptr;//link bna pichle wala se

         prevptr=currptr;
         currptr=nextptr;

    }
    return(prevptr);//kuki naya head vo hai
}
//recursive way
node *recursive(node* &head){

    if(head==NULL ||head->next==NULL){
        return head;
    }
    node *newhead=recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return(newhead);
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
    node*newhead=recursive(head);
    display(newhead);
    return 0;
}
