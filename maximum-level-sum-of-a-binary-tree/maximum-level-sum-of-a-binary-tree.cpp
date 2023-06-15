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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *>q;
        int i=0,j=1,level=1;
        if(!root) return 0;
        int maxx=INT_MIN;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int sum=0;
            for(i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                sum+=temp->val;
            }
            if(sum>maxx)
            {
                maxx=sum;
                level=j;
            }
            j++;
            
        }
        return level;

    }
};