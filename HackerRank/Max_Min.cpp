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

void insert_at_tail (Node* &head, int value)
{
    Node* new_node = new Node(value);
    if (head == NULL)
    {
        new_node->next = head;
        head = new_node;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
    return;
}

int min_linked_list(Node* head)
{
    int min = INT_MAX;
    Node* tmp = head;
    while (tmp != NULL)
    {
        if (min > tmp->val)
        {
            min  = tmp->val;
        }
        tmp = tmp->next;
    }
    return min;
}
int max_linked_list(Node* head)
{
    int max = INT_MIN;
    Node * temp = head;
    while (temp != NULL)
    {
        if (max < temp->val)
        {
            max = temp->val;
        }
        temp = temp->next;
    }
    return max;
}

int main()
{
    int v; 
    Node* head = NULL;
    while (true)
    {
        cin>>v;
        if (v == -1) break;
        insert_at_tail(head, v);
    }
    int min = min_linked_list(head);
    int max = max_linked_list(head);
    cout<<max<<" "<<min<<endl;
    
    return 0;
}