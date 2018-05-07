//
//  AVLTree.h
//  Data Structures
//
//  Created by Cortez, Jairo on 4/17/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.hpp"

template <class  Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightleftRotation (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode (BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode (BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
    
public:
    AVLTree();
    
    void insert(Type itemTonsert();
    void remove(Type Value);
    
    };
    
    
    /*
     A negative value means the right is greater than the left
     */
template <class Type>
int AVLTree<Type> :: heightDifference(BinarryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this ->calulateHeight(node->getLeftNode());
    int rightHeight = this->calulateHeight(node->getRightNode());
    balance = leftHeight - rightHeight;
    return balance;
}
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(changedNode->getLeftNode());
        
    changed Node_>setLeftChild(parent);
        
    return changedNode;
}
    
template <class Type>
BonaryTreeNode<Type> * ACLTree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changed;
    changedNode = parent->getRightNode();
        
    parent->setRightChild(leftRotation(changedNode));
        
    return rightRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
    
}
template <class Type>
BinaryTreeNod0<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> *parent)
{
    int balancedFactor = heightDifference(parent);
    
    if (balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);)
        }
        else
        {
        parent
        }
        else if (inserted > parent->getNodeData())
        {      
}
       
template <class Type>
    void AVLTree<Type> :: insert(Type item)
    {
        insertNode(this->getRoot(), item);
    }
template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item)
}
                                                             
#endif /* AVLTree_h */
