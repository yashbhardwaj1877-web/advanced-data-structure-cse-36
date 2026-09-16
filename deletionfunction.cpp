#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

// // Node* DelBegin(Node *head)
// // {
// //     if(head==NULL){
// //         cout<<"List is empty"<<endl;
// //         return head;
// //     }
// //     Node *p=head;
// //     head=head->next;
// //     free(p);
// //     return head;
// // }

// Node* delbeg(Node *head)
// {
//     Node *p = head;
//     head = head->next;
//     int x = p->data;
//     free(p);
//     return head;
// }   

// int main() {
//     Node* head = nullptr;

//     head = Inbeg(head, 1);
//     head = Inbeg(head, 2);  
//     head = delbeg(head);

//     free(head);
//     return 0;
// }

Node* Inbeg(Node* head, int data)
{
    Node* p = new Node;

    p->data = data;
    p->next = head;

    return p;
}
Node* delbeg(Node* head)
{
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return head;
    }
    Node* p = head;
    head = head->next;

    int x = p->data;
    delete p;
    cout<<"Deleted:"<<x<<endl;
    return head;
}
Node* push(Node* head, int data)
{
    Node* p = new Node;
    p->data = data;
    p->next = head;
    return p;
}   
Node *pop(Node *head)
{
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return head;
    }
    Node *p = head;
    head = head->next;

    int x = p->data;
    delete p;
    cout<<"Popped:"<<x<<endl;
    return head;
}


int main()
{
    Node* head = nullptr;
    head = Inbeg(head, 1);
    head = Inbeg(head, 2);
    head = delbeg(head);
    while (head != nullptr) {
        head = delbeg(head);
    }

    return 0;
}

#include <iostream>
using namespace std;

struct node{
    int n;
    cin>>n;

}
