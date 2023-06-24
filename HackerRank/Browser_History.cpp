#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        string val;
        Node* next;
        Node* prev;

    Node (string v)
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

void insert_tail (Node* &head, Node* &tail, string s)
{
    Node* newNode = new Node(s);
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

    string s; 
    while (true)
    {
        cin>>s;
        if (s == "end") break;
        insert_tail(head, tail, s);

    }
    int tc; cin>>tc;
    Node* tmp = head;
    while (tc--)
    {
        string cmd;
        cin>>cmd;
        if(cmd == "prev")
        {
            if(tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout<<tmp->val<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if (cmd == "next")
        {
            if(tmp->next != NULL)
            {
                tmp = tmp->next;
                cout<<tmp->val<<endl;
            }
            else cout<<"Not Available"<<endl;
        }

        else if(cmd == "visit")
        {
            Node * temp = head;
            int flag = 0;
            string visit;
            cin>>visit;
            while (temp != NULL)
            {
                if(temp->val == visit)
                {
                    cout<<temp->val<<endl;
                    flag = 1;
                    tmp = temp;
                    break;
                }
                temp = temp->next;
            }
            if(flag == 0) 
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    
    return 0;
}