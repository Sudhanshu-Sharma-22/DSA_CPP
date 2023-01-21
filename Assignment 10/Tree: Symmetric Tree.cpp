
//https://leetcode.com/problems/symmetric-tree/submissions/882654504/

class Solution {
public:
    bool check(TreeNode* left, TreeNode* right)
    {
        if (left==NULL && right==NULL)
            return true;
        else if (left==NULL || right==NULL)
            return false;
        if (left->val !=right->val)
            return false;
        bool a=(check(left->left, right->right));
        bool b=(check(left->right, right->left));
        return(a&&b) ;
    }
    bool isSymmetric(TreeNode* root) {
      if (root == nullptr) return true;
      return check(root->left, root->right);
    }
};
