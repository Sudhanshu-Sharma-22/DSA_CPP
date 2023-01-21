
//https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/881046799/

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*>s;
        TreeNode*temp=root;
        while (temp || !s.empty()) {
            if (temp) {
                ans.push_back(temp -> val);
                if (temp -> right) {
                    s.push(temp -> right);
                }
                temp = temp -> left;
            } 
            else{
                temp=s.top();
                s.pop();
            }
        }
        return ans;
    }
};
