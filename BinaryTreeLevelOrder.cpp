#include <queue>
#include <vector>

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        if (root == nullptr) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size(); 
            vector<int> currentLevel;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front(); 
                q.pop();
                currentLevel.push_back(node->val); 
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            result.push_back(currentLevel);
        }
        
        return result;
    }
};
