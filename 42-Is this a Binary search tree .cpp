/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/

#include <climits>

bool isBST(Node* root, int& prev) 
{
    if (root == NULL) 
    {
        return true;
    }

    if (!isBST(root->left, prev)) 
    {
        return false;
    }

    if (root->data <= prev) 
    {
        return false;
    }

    prev = root->data;

    return isBST(root->right, prev);
}

bool checkBST(Node* root) 
{
    int prev = INT_MIN;
    return isBST(root, prev);
}
