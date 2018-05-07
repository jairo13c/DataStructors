//
//  Trees.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 3/27/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Trees_hpp
#define Trees_hpp

#include "../../Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //information methods
    virtual int getSize() = 0;
    virtual int getHeight () = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //*Data Methods*
    virtual void insert(Type data) = 0;
    virtual bool  contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    //*Traversal*
    virtual void inOrderTraersal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
};

#endif /* Trees_hpp */
