//
//  BinaryTreeTester.h
//  Data Structures
//
//  Created by Cortez, Jairo on 4/11/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef BinaryTreeTester_h
#define BinaryTreeTester_h

#include "../model/Nodes/BinaryTreeNode.hpp"
#include "../model/Structures/NonLinear/BinarySearcchTree.hpp"
#include <iostreaam>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public: void doTreeStuff();
};
void BinaryTreeTester :: doTreeStuff()
{
    testerTree.insert(7);
    testerTree.insert(1);
    testerTree.insert(24);
    testerTree.insert(6);
    testerTree.insert(66);
    testerTree.insert(5);
    testerTree.insert(25);
    testerTree.insert(4380);
    testerTree.insert(99);
    testerTree.insert(9001);
    testerTree.insert(101);
   
    
    
    testerTree.inOrderTraversal();
    
    
}

#endif /* BinaryTreeTester_h */
