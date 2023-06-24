#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node (int v)
    {
        this->val = v;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal (Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
}

void insert_at_position(Node* head, int pos, int valu)
{
    Node* new_node =new Node(valu);
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++ )
    {
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
    new_node->prev = tmp;
    new_node->next->prev = new_node;
    
}


void print_reverse (Node* tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
}


int size (Node* head)
{
    int count = 0;
    Node* tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_head (Node* &head, Node* &tail, int valu)
{
    Node* newNode = new Node(valu);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode; 
}
void insert_tail (Node* &head, Node* &tail, int valu)
{
    Node* newNode = new Node(valu);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}  


int main()
{
    Node* head = NULL;
    Node* tail = head;

    int n; cin>>n;
    while (n--)
    {
        int pos, valu; 
        cin>>pos>>valu;

        if(pos == 0)
        {
            insert_head(head, tail, valu);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, valu);
        }
        else if (pos > size(head))
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else
        {
            insert_at_position(head, pos, valu);
        }
        cout<<"L -> ";
        print_normal(head);
        cout<<endl;
        cout<<"R -> ";
        print_reverse(tail);
        cout<<endl;
    }
    
    return 0;
}