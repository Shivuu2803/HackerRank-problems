#include <iostream>
#include <cstddef>
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  
    void preOrder(Node *root) {

          if( root == NULL )
              return;

          std::cout << root->data << " ";

          preOrder(root->left);
          preOrder(root->right);
      }

Node* insert(Node* root, int data) 
{
        if (root == NULL) 
        {
            return new Node(data);
        } 
        else 
        {
            Node* curr;
            if (data <= root->data) 
            {
                curr = insert(root->left, data);
                root->left = curr;
            } 
            else 
            {
                curr = insert(root->right, data);
                root->right = curr;
            }
            return root;
        }
}

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
	myTree.preOrder(root);
    return 0;
}
