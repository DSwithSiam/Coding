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

void input_linked_list (Node* &head, int valu)
{
    Node * newNode = new Node(valu);
    
    if(head == NULL)
    {
        newNode->next = head;
        head = newNode;
        return;
    } 
    Node * tmp = head;
    while (tmp->next != NULL) 
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
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
void print_linked (Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
   
    
}
void shart_linked_list (Node* &head, int len)
{
    Node * tmp = head;
    Node * tmp2 = head;
    int l = len;
    for (int i=1; i < len; i++ )
    {

        for(int j=1; j< l; j++ )
        {
            tmp2 = tmp2->next;
            if (tmp->val < tmp2->val)
            {
                int temp = tmp->val;
                tmp->val = tmp2->val;
                tmp2->val = temp;
            }
            
        }
        l--;
        tmp = tmp->next;
        tmp2 =tmp;
    }
}

int main()
{
    Node* head = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if (v == -1) break;
        input_linked_list(head, v);
    }
    int len = len_linked_list(head);
    shart_linked_list(head, len);
    int mid;
    Node* tmp = head;
    if (len % 2 == 0)
    {
        mid = (len/2);
        for (int i=1; i<=mid+1; i++)
        {
            if (mid <= i)
            {
                cout<<tmp->val<<" ";
            }
            tmp = tmp->next;
            
        }
    }
    else
    {
        mid = (len/2)+1;
        for (int i=1; i<=mid; i++)
        {
            if (i >= mid)
            {
                cout<<tmp->val<<" ";
            }
            tmp = tmp->next;
        }
    }
    
    return 0;
}