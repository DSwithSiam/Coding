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

void insert_linked_tail (Node* &head, Node* &tail, int valu)
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


void insert_a_head (Node *& head,Node* &tail, int valu)
{
    Node * newNode =new Node(valu);
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = head;
    int t, posi; cin>>t;
    long long int v;
    while (t--)
    {
        cin>>posi;
        cin>>v;
        if(posi == 0) 
        {
            insert_a_head(head, tail, v);
        }
        else
        {
            insert_linked_tail(head, tail, v);
        }
        
        cout<<head->val<<" "<<tail->val<<endl;

    }
    
    
    return 0;
}