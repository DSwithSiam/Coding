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

void inser_at_tail (Node* &head, Node* &tail, int valu)
{
    Node* newnode = new Node(valu);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = tail->next;
}

void printNode (Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int size(Node* head)
{
    Node* tmp = head;
    int c= 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    return c;
    
}

void sort (Node* head, int size)
{
    Node* tmp = head;
    int si = size;
    for (int i=1; i<size; i++)
    {
        Node* tmp2 = tmp->next;
        for(int j=1; j < si; j++)
        {
            if(tmp->val > tmp2->val)
            {
                swap(tmp->val, tmp2->val);
            }
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
        si--;
    }    

    
}

void Remove_Duplicates(Node* head)
{
    if (head == NULL) return;
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        if(tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;

        }
        if(tmp->next == NULL) break;
        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
        

    }
}

int main()
{
    Node* head = NULL;
    Node* tail = head;
    while (true)
    {
        int v;
        cin>>v;
        if (v == -1) break;
        inser_at_tail(head, tail, v);
    }
    
    sort(head,size(head));
    Remove_Duplicates(head);
    printNode (head);
    return 0;
}