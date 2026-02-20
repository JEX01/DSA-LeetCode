class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> st;
        while(1){
            if(st.empty() && root==NULL) return v;
            if(root==NULL){
                TreeNode* t=st.top();
                v.push_back(t->val);
                root=t->right;
                st.pop();
                continue;
            }
            st.push(root);
            root=root->left;
        }
        return v;
    }
};