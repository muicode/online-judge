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
    TreeNode* searchBST(TreeNode* root, int val) {
      return helper(root, val);
    }

    TreeNode* helper(TreeNode* node, int val) {
      if (node == NULL) return NULL;
      if (node->val == val) return node;

      TreeNode* temp;
      if (val < node->val) return helper(node->left, val);
      else return helper(node->right, val);
    }
};
