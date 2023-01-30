
//https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

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
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    
    int depth(Node*root){
        Node*Left=root->left;
        Node*Right=root->right;
        int left=0,right=0;
        // left=recurTraver(Left);
        // right=recurTraver(Right);
        while(Left->left!=NULL || Left->right!=NULL){
            left++;
            Left=Left->left;
        }
        while(Right->left!=NULL || Right->right!=NULL){
            right++;
            Right=Right->right;
        }
        return (left>right) ? left : right;
    }
    
    // int recurTraver(Node * root){
    //     Node*Left=root->left;
    //     Node*Right=root->right;
    //     int left=0,right=0;
    //     while(Left!=NULL){
    //         left++;
    //         Left=Left->left;
    //     }
    //     while(Right!=NULL){
    //         right++;
    //         Right=Right->right;
    //     }
    //     return (left>right) ? left : right;
    // }
    
    int height(Node* root) {
        if(root==NULL) return -1;
        return 1+max(height(root->left),height(root->right));
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
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}
