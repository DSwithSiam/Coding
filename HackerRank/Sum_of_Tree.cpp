#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int val;
        Node* left;
        Node* right;
    Node (int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_lavel_order (void)
{
    int v;
    cin>>v;
    Node* root;
    queue<Node*> q;
    if(v == -1)
    {
        root == NULL;
    }
    else
    {
        root = new Node(v);
    }
    if(root) q.push(root);

    while (!q.empty())
    {
        /* code */
        Node* root = q.front();
        q.pop();

        int l, r;
        cin>>l>>r;
        Node* myleft;
        Node* myRight;
        if(l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if(r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        
        root->left = myleft;
        root->right = myRight;

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
    return root;
}

int sum_binary_tree(Node* root)
{
    
    queue<Node*> q;
    if(root) q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        /* code */
        Node* root = q.front();
        q.pop();

        sum = sum + root->val;

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }

    return sum;
}
int main()
{
    Node* root = input_lavel_order();
    int sum = sum_binary_tree(root);
    cout<<sum<<endl;
    
    return 0;
}