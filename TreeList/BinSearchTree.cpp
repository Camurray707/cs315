//Christopher Murray
// Created by ASUS on 3/4/2020.
//

#include <iostream>
#include "BinSearchTree.h"
#include "TreeNode.h"

using namespace std;

TreeNode *BinSearchTree::local_insert(TreeNode *root, int v) {
    if (root == nullptr)
        return new TreeNode(v);
    if (root->value() < v)
        root->rightSubTree(local_insert(root->rightSubTree(), v));
    else {
        root->leftSubTree(local_insert(root->leftSubTree(), v));
    }
    return root;
}

void BinSearchTree::insert(int v) {
    if (!find(v))
        root = local_insert(root, v);
}

bool BinSearchTree::find(int v){

    if (root == nullptr)
        return false;
    if (root->value() == v)
        return true;
    if (root->value() > v) {
        return this->left().find(v);
    }else {
        return this->right().find(v);
    }

//    return this->left().find(v)  || this->right().find(v);
}

bool BinSearchTree::iterFind(int v) {       //fixme: this is being changed

    while (root != nullptr) {
        if (root->value() > v) {
            this->left();
        }else if (root->value() < v) {
            this->right();
        }else if (root->value() == v) {
            return true;
        }
    }
    return false;
}

int BinSearchTree::size() {

    if(root == nullptr)
        return 0;

//    BinSearchTree left;
//    left.root = this->root->leftSubTree();
//    BinSearchTree right;
//    right.root = this->root->rightSubTree();

    return 1 + left().size() + right().size();
}

void BinSearchTree::inorderDump() {

    if(root == nullptr)
        return;
    if (this->left().root == nullptr) {
        cout<<root->value()<<endl;
        return this->right().inorderDump();
    }else {this->left().inorderDump();}

    cout<<root->value()<<endl;
    this->right().inorderDump();

}

int BinSearchTree::maxDepth() {

    if (root == nullptr)
        return 0;
    if (left().maxDepth() >= right().maxDepth()){
        return 1 + left().maxDepth();
    }
    return 1 + right().maxDepth();
}

//left() and right() returns a new BinSearchTree that it's root is changed to its left or right subtree
BinSearchTree BinSearchTree::left() {
    BinSearchTree left;
    left.root = this->root->leftSubTree();
    return left;
}
BinSearchTree BinSearchTree::right () {
    BinSearchTree right;
    right.root = this->root->rightSubTree();
    return right;
}
