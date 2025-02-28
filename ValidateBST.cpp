class Solution {
public:
    bool isValidBST(TreeNode* root, long minVal = LONG_MIN, long maxVal = LONG_MAX) {
        if (root == nullptr) {
            return true;
        }
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }
        return isValidBST(root->left, minVal, root->val) && 
               isValidBST(root->right, root->val, maxVal);
    }
};
