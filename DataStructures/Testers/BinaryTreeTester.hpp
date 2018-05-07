//
//  BinaryTreeTester.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 3/27/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../../Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;

public:
    //Information Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual int isComplete() = 0;
    virtual int is Balanced() = 0;
    //*Data Methods*
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remve(Type data) = 0;
    //*Traversals*
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal () =0;
    virtual void postOrderTraverrsal() = 0;
 
};
#endif /* BinaryTreeTester_hpp */
