//Christopher Murray
// Created by ASUS on 3/4/2020.
//

#ifndef TREENODE_HPP_TREENODE_H
#define TREENODE_HPP_TREENODE_H


class TreeNode {
public:
    TreeNode(): left(nullptr), right(nullptr), data(0) {}
    TreeNode(int n): left(nullptr), right(nullptr), data(n) {}

    TreeNode *leftSubTree() {return left;}
    TreeNode *rightSubTree() {return right;}

    void leftSubTree(TreeNode *left) {this->left = left;}
    void rightSubTree(TreeNode *right) {this->right = right;}

    int& value() {return data;}

private:
    TreeNode *left, *right;
    int data;
};


#endif //TREENODE_HPP_TREENODE_H
