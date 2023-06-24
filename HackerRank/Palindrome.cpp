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
        newnode->next = head;
        head = newnode;
        tail = head;
        tail->next = NULL;
        return;
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

void reverse(Node* &head, Node* tmp)
{
    if(tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}

bool chak_Palindrome(Node* head, Node* head2)
{
    Node* tmp = head;
    Node* tmp2 = head2;
    while (tmp->next != NULL)
    {
        if(tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* copy = NULL;
    Node* ctail = NULL;
    int v;
    while (true)
    {
        
        cin>>v;
        if (v == -1) break;
        inser_at_tail(head, tail, v);
    }

    Node* tmp = head;
    while (tmp != NULL)
    {
        inser_at_tail (copy, ctail, tmp->val);
        tmp = tmp->next;
    }
    // cout<<head->val;
    reverse(copy, copy);
    
    if(chak_Palindrome(head, copy) == true)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
    return 0;
}