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
    void dfs(TreeNode* root, int &totalSum , int sum) {
        if (!root) {
            return;
        }

        sum = sum * 10 + root->val;
        if (!root->left && !root->right) {
            totalSum += sum;
        }

        if (root->right) {
            dfs(root->right, totalSum, sum);
        }

        if (root->left) {
            dfs(root->left, totalSum, sum);
        }

    }

public:
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        int totalSum = 0;

        if (!root) {
            return ans;
        }
        dfs(root, totalSum, ans);

        return totalSum;
    }
};