#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

Node*Getnode(){
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    return p;
}
Node *Inbeg(Node *head, int x){
    Node *p=Getnode();
    p->data=x;
    p->next=head;
    head=p;
    return head;
}
void traverse(Node *head){
    Node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
Node *Instail(Node *head, int x){
    Node *p=Getnode();
    p->data=x;
    p->next=NULL;
    if(head==NULL){
        head=p;
        return head;
    }
    Node *q=head;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=p;
    return head;
}
Node *Inserthead(Node *head, int x){
    Node *p=Getnode();
    p->data=x;
    p->next=head;
    head=p;
    return head;
}
Node *InsertAfter(Node *head, int x, int y){
    Node *p=Getnode();
    p->data=x;
    Node *q=head;
    while(q!=NULL && q->data!=y){
        q=q->next;
    }
    if(q==NULL){
        cout<<"Element not found"<<endl;
        return head;
    }
    p->next=q->next;
    q->next=p;
    return head;
}
Node *Insertpos(Node *head, int x, int pos){
    Node *p=Getnode();
    p->data=x;
    if(pos==1){
        p->next=head;
        head=p;
        return head;
    }
    Node *q=head;
    for(int i=1;i<pos-1 && q!=NULL;i++){
        q=q->next;
    }
    if(q==NULL){
        cout<<"Position out of bounds"<<endl;
        return head;
    }
    p->next=q->next;
    q->next=p;
    return head;
}

Node* delbeg(Node *head)
{
    Node *p = head;
    head = head->next;
    int x = p->data;
    delete p;
    return head;
}

int main() {
    Node *head = NULL;
    head = Inbeg(head, 1);
    head = Inbeg(head, 2);
    head = Inbeg(head, 3);
    head = Instail(head, 4);
    head = Instail(head, 5);      
    head = InsertAfter(head, 6, 3);
    head = Insertpos(head, 7, 3);
    head = delbeg(head);
    traverse(head);
    free(head);
    return 0;
}

