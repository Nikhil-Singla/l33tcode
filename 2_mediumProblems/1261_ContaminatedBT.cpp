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
class FindElements {
public:

    unordered_set<uint> set;

    FindElements(TreeNode* root) 
    {
        root->val = 0;
        set.insert(0);
        helper(root);    
    }
    
    void helper(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        uint n = (root->val*2) + 1;
        if(root->left)
        {
            root->left->val = n;
            set.insert(n);
            helper(root->left);
        }
        if(root->right)
        {
            root->right->val = n+1;
            set.insert(n+1);
            helper(root->right);
        }
    }

    bool find(int target) 
    {
        return set.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */