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

int compare (Node* list1, Node* list2)
{
    Node* tmp1 = list1;
    Node* tmp2 = list2;
    while(tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return 1;
}

int main()
{
    Node* list1 = NULL;
    Node* list2 = NULL;

    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_tail(list1, v);
    }
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_tail(list2, v);
    }

    if (len_linked_list(list1) != len_linked_list(list2))
    {
        cout<<"NO";
    }
    else
    {
        int c = compare(list1, list2);
        if (c == 0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}