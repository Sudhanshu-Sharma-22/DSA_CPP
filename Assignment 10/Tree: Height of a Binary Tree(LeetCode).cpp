
//https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/888684805/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // int height(TreeNode*root){
    //     TreeNode * Left=root;
    //     TreeNode * Right=root;
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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
