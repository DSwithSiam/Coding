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
void max_min_leaf(Node* root)
{
    if(root == NULL) return;
    queue<Node*> q;
    if(root) q.push(root);
    int sum = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    while (!q.empty())
    {
        /* code */
        Node* root = q.front();
        q.pop();

        if(root->left == NULL && root->right == NULL)
        {
            if(root->val < min)
            {
                min = root->val;
            }
            if(root->val > max)
            {
                max = root->val;
            }
        }
        

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
    cout<<max<<" "<<min<<endl;
}

int main()
{
    Node* root = input_lavel_order();
    max_min_leaf(root);
    
    return 0;
}