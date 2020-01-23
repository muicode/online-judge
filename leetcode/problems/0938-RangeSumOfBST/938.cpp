/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	public:
		// BFS iterative way
		int bfs(TreeNode *root, int L, int R)
		{
			queue<TreeNode*> q;
			q.push(root);
			int sum = 0;

			while(!q.empty())
			{
				TreeNode *curr = q.front();
				q.pop();
				if(curr->val >= L && curr->val <= R)
				{
					sum += curr->val;
				}

				if(curr->left && L < curr->val) 
				{
					q.push(curr->left);
				}
				if(curr->right && R > curr->val) 
				{
					q.push(curr->right);
				}
			}

			return sum;
		}

		// DFS iterative way
		int dfs(TreeNode *root, int L, int R)
		{
			stack<TreeNode*> s;
			s.push(root);
			int sum = 0;

			while(!s.empty())
			{
				TreeNode *curr = s.top();
				s.pop();

				if(curr->val >= L && curr->val <= R)
				{
					sum += curr->val;
				}

				if(L < curr->val && curr->left) 
				{
					s.push(curr->left);
				}
				if(R > curr->val && curr->right) 
				{
					s.push(curr->right);
				}
			}

			return sum;
		}

		// DFS recursion way
		int dfsRecur(TreeNode *root, int L, int R)
		{
			int sum = 0;

			if(root->val >= L && root->val <= R) 
			{
				sum += root->val;
			}

			if(L < root->val && root->left) 
			{
				sum += dfs(root->left, L, R);
			}
			if(R > root->val && root->right) 
			{
				sum += dfs(root->right, L, R);
			}

			return sum;
		}

		int rangeSumBST(TreeNode* root, int L, int R) {
			return dfs(root, L, R);
#if 0
			return bfs(root, L, R);
			return dfsrecur(root, L, R);
#endif
		}
};
