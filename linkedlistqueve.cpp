#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *GetNode()
{
    node *p;
    p = new node;
    return p;
}

node *Enqueue(node *PQ, int x)
{
    node *curr, *prev;
    curr = PQ;
    prev = NULL;

    node *R;
    R = GetNode();
    R->data = x;

    while (curr != NULL && x >= curr->data)
    {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL)
    {
        R->next = PQ;
        return R;
    }
    else
    {
        prev->next = R;
        R->next = curr;
    }

    return PQ;
}

int main()
{
    node *PQ;
    PQ = NULL;

    PQ = Enqueue(PQ, 1);
    PQ = Enqueue(PQ, 2);
    PQ = Enqueue(PQ, 3);
    PQ = Enqueue(PQ, 10);
    PQ = Enqueue(PQ, 5);
    PQ = Enqueue(PQ, 6);
    PQ = Enqueue(PQ, 1);

    node *p = PQ;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}