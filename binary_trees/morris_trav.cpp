#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<int> getInorder(TreeNode *root)
{
    vector<int> inorder;

    TreeNode *cur = root;

    while (!cur)
    {
        if (!cur->left)
        {
            inorder.push_back(cur->data);
            cur = cur->right;
        }
        else
        {
            TreeNode *temp = cur->left;
            while (temp->right && temp->right != cur)
            {
                temp = temp->right;
            }

            if (!temp->right)
            {
                // point to root , this is the last node.
                temp->right = cur;
                cur = cur->left;
            }
            else
            {
                temp->right = NULL;
                cur = cur->right;
                inorder.push_back(cur->data);
            }
        }
    }
}

vector<int> getPreorder(TreeNode *root)
{
    vector<int> preorder;

    TreeNode *cur = root;

    while (!cur)
    {
        if (!cur->left)
        {
            preorder.push_back(cur->data);
            cur = cur->right;
        }
        else
        {
            TreeNode *temp = cur->left;
            while (temp->right && temp->right != cur)
            {
                temp = temp->right;
            }

            if (!temp->right)
            {
                // point to root , this is the last node.
                temp->right = cur;
                preorder.push_back(cur->data);
                cur = cur->left;
            }
            else
            {
                // alr pointing , shift to right sbtreee
                temp->right = NULL;
                cur = cur->right;
            }
        }
    }
}