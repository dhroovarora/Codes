https://leetcode.com/problems/construct-string-from-binary-tree/?envType=daily-question&envId=2023-12-08





class Solution {
public:
    string tree2str(TreeNode* root) {
        if (root == nullptr) {
            return "";
        }

        // Step 1: Start with an empty result string
        stringstream result;

        // Step 2: Perform preorder traversal
        preorderTraversal(root, result);

        // Step 3: Return the final result string
        return result.str();
    }

private:
    void preorderTraversal(TreeNode* node, stringstream& result) {
        if (node == nullptr) {
            return;
        }

        // Step 4: Append the current node's value to the result
        result << node->val;

        // Step 5: Check if the current node has a left child or a right child
        if (node->left != nullptr || node->right != nullptr) {

            // Step 6: If there is a left child, add empty parentheses for it
            result << "(";
            preorderTraversal(node->left, result);
            result << ")";
        }

        // Step 7: If there is a right child, process it similarly
        if (node->right != nullptr) {
            result << "(";
            preorderTraversal(node->right, result);
            result << ")";
        }

        // Step 8: The recursion will handle all the child nodes
    }
};