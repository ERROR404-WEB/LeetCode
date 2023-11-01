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
    unordered_map<int,int>m;
    vector<int>ans;
    int maxx=0;
    void inn(TreeNode* root)
    {
        if(!root) return;
        inn(root->left);
        m[root->val]++;
        maxx=max(m[root->val],maxx);
        inn(root->right);
    }    
    void out(TreeNode* root)
    {
        if(!root) return;
        out(root->left);
        if(m[root->val]==maxx)
        {
            ans.push_back(root->val);
            m[root->val]=-1;
        }
        out(root->right);
    }
            
    vector<int> findMode(TreeNode* root) {
        inn(root);
        out(root);
        return ans;
    }
};