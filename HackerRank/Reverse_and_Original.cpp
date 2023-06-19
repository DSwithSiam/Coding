#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int val;
        Node* next;
    Node (int v)
    {
        this->val = v;
        this->next = NULL;
    }
};

void input_linked_list (Node* &head,Node* &tail, int valu)
{
    Node * newNode = new Node(valu);
    
    if(head == NULL)
    {
        newNode->next = head;
        head = newNode;
        tail = newNode;
        return;
    } 
    tail->next = newNode;
    tail = newNode;
    
}

void print_linked (Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    return;
    
}
int len_linked_list(Node* head)
{
    Node* tmp = head;
    int c = 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
}

void insert_a_head (Node *& head, int valu)
{
    Node * newNode =new Node(valu);
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}


void reverse_linked_list (Node * head)
{
    Node * tmp = head;
    if (tmp == NULL) return;
    reverse_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}

int main()
{
    Node* head = NULL;
    Node* tail = head;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        input_linked_list(head, tail, v);
    }
    
    // int len = len_linked_list(head);
    reverse_linked_list(head);
    cout<<endl;
    print_linked(head);
    return 0;
}