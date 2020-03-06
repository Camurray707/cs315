//Christopher Murray
#include <iostream>
#include <fstream>
#include "BinSearchTree.h"
#include "TreeNode.h"

using namespace std;

int main(int argc, char *argv[]) {
    //create a tree and then print the values of its nodes
    //from the smallest to the largest

    BinSearchTree *tree = new BinSearchTree();

    ifstream testFile;
    testFile.open(argv[1]);

    int v;
    while (!testFile.eof()) {
        testFile>>v;
        tree->insert(v);
    }
    testFile.close();
    cout<<"size is: "<<tree->size()<<endl;
//    cout<<"iterFind 76: "<<tree->iterFind(76)<<endl;
    cout<<"maxDepth: "<<tree->maxDepth()<<endl;
    tree->inorderDump();
    return 0;
}