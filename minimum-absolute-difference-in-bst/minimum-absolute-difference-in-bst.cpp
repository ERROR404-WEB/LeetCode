class Solution {
public:
    void inorder(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int min,i;
        min=v[1]-v[0];
        for(i=1;i<v.size();i++)
        {
            if(min>v[i]-v[i-1])
                min=v[i]-v[i-1];
        }
        return min;
    }
};