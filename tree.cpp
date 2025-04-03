// 假设我们使用二叉树作为示例，以下是一个简单的二叉树节点结构体定义和初始化函数
#include <iostream>

// 定义二叉树节点结构体
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// 初始化一个简单的二叉树
TreeNode* initTree() {
    // 创建根节点
    TreeNode* root = new TreeNode(1);
    // 创建左子节点
    root->left = new TreeNode(2);
    // 创建右子节点
    root->right = new TreeNode(3);
    // 左子节点的左子节点
    root->left->left = new TreeNode(4);
    // 左子节点的右子节点
    root->left->right = new TreeNode(5);

    return root;
}
