//Christopher Murray
// Created by ASUS on 3/4/2020.
//

#ifndef TREENODE_HPP_BINSEARCHTREE_H
#define TREENODE_HPP_BINSEARCHTREE_H

class TreeNode;

class BinSearchTree {
public:
    void insert(int v);
    bool find(int v);
    bool iterFind(int v);
    int size();
    void inorderDump();
    int maxDepth();

private:
    TreeNode *local_insert(TreeNode*, int);
    TreeNode *root;

    BinSearchTree left();
    BinSearchTree right();
};


#endif //TREENODE_HPP_BINSEARCHTREE_H
