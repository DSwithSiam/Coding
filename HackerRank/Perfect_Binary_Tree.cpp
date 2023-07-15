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

void print_level_order(Node* root, int l)
{
    queue<Node*> q;
    bool flg = true;
    if(root) q.push(root);

    while (!q.empty())
    {
        /* code */
        Node* root = q.front();
        q.pop();

        if(root->left == NULL && root->right != NULL || root->left != NULL && root->right == NULL)
        {
            flg = false;
        }
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
        
    }
    if(flg) cout<<"YES";
    else cout<<"NO";
    
}
int main()
{
    Node* root = input_lavel_order();
    int c;
    cin>>c;
    print_level_order(root, c);

    
    return 0;
}