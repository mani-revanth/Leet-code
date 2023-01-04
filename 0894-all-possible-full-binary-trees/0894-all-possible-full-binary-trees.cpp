class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n==1)
        {
            return {new TreeNode(0)};
        }
        vector<TreeNode*> temp;
        for(int i=2;i<n;i++)
        {
            vector<TreeNode*>l=allPossibleFBT(i-1);
            vector<TreeNode*>r=allPossibleFBT(n-i);
            for(int j=0;j<l.size();j++)
            {
                for(int k=0;k<r.size();k++)
                {
                    TreeNode*root=new TreeNode(0);
                    root->left=l[j];
                    root->right=r[k];
                    temp.push_back(root);
                }
            }
        }
        return temp;
    }
};