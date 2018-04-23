//
//  BinarySearchTree.h
//  Data Structures
//
//  Created by Cortez, Jairo on 4/9/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include <iostream>


using namespace std;


template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    //Mark: protected methods
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);

    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStsrt);
    void postOrderTraversal(BinaryTreeNode<Type> * postStsrt);
    
    void destroyTree(BinaryTreenode<Type> * node);
   
    
    Binary<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    Binary<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);

public:
    //Mark: Public Methods
    BinarySearchTree();
    ~BinarySearchTree();

    BinaryTreeNode<Type> * getRoot();

    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoOrderTraversal();

    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();

    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);

    Type findMinimum();
    Type findMaximum();
};

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type item)
{
    return false;
}

template <class Type>
void BinarySearchTree<Type> :: remove(type item)]
{
    
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrdderTraversal(this->root);
}

template <class Type>
void BiarySearchTree<type> :: inOrderTraversal (BinaryTreeNode<Type> * currenNode)
{
    if(currentSetNode != nullptr)
    {
        inOrderTraversalCurrentNode->getLeftNode());
        cout << currentNode->getData() << end1;
        inOrderTraveral(currentNode->.getRight());
    }
}

template <class Type>
int BinarySearwchTree<Type> :: getSize()
{
    int size = 0;
    
    size += calcualteSize(this->root);
    
    return size;
    
}

template <class Type>
int BinarySearcchTree<Type> :: calulateSize(BinaryTreeNode<Type> * current)
{
    if(current != nulltr)
    {
        return calculateSize(current->getLeftNode()) + calcualteSize(current->getRightNode()) +1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(this->root);
}

template <class Type>
int BinaraySearchTree<Type> :: ccalculateHeight(BinaryTreeNode<Type> * current)
{
    if (current != nullptr)
    {
        return max(calcualteHeight(current->getLeftNode()). calculateHeight(current->getRightNode())) + 1;
    }
    return 0;
}

tempalte <class Type>
bool BinaryAearchTree<Type> :: isBalanced()
{
    return isBalanced(this->root);
}

template <cclass Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(current->getLeftNode());
    rightHeight = calculateHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalanced = isBalanced(current->getLeftNode());
    bool rightBalanced = isBalanced(current->getRightNode());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <clas Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinaryTreeNode<Type> * current = this->root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getData())
            {
                returrn true;
            }
            else if (itemToFind < current->getData())
            {
                current = current->getLeftNode();
            }
            else
            {
                current = current->getRightNode();
            }
        }
        return false;
    }
}

template <class Type>
void BinarySearchTree<Type> :: removve(Type getRidOfMe)
{
    i(this->root == nullptr)
    {
        cout << "Empty tre so removal is not possible" << endl;
    }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRidoOfMe < current-> getData())
                {
                    current = current->getLeftNode();
                }
                else
                {
                    current = current->getRightNode();
                }
            }
    
        }
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == this->root)
            {
                removeNode(this->root)
            }else if(getRidOfMe < previous->getData())
            {
                removeNode(previous->getLeftNode());
            }
            else
            {
                removeNode(previous->getRightNode());
            }
        }
    }
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRootNode();
    
    //Node is a leaf - has no kddos
    if(removeMe->getRightNode() == nullptr && removeMe->getLeftNode() = nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
       if (previous != nullptr && removeMe->getData() < previous->getData())
       {
           previous->setRightNode(removeMe);
       }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        delete temp;
    }
    //node has only a left child
    else if(removeMe->geetRightNode() == nullptr)
    {
        temp = removeMe;
        removeME = removeMe->getLeftNode();
        
        if(previous != nullptr && temp->getData() < previous->getData())
        {
             previous->setLeftNode(remveMe);
        }
        else if(previous != nullptr && temp->getData() > previous->getData())
        {
            previous->setRightNode(removeMe);
        }
        
        removeMe->setRootNode(previous);
        
        delete temp;
    }
    else  if(removeMe->getLeftNode() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightNode();
        if(previous != nullptr && removeMe->getData()< previous->getData())
        {
            previous->setLeftNode(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previousMe->setRightNode(removeMe);
        }
        removeMe->setRootNode(previous);
        delete temp;
    }
    else
    {
        current = getRightMostChild(removeMe->getLeftNode());
        
        previous = current->getRootNode();
        removeMe-> setData(current->getData());
        
        if(previous == nullptr) //removing from the root
        {
            removeMe->setLeftNode(current->getLeftNode());
        }
        else
        {
            previous->setRightNode(current->getLeftNode());
        }
        if(current->getLeftNode() != nullptr)
        {
            current->getLeftNode()->setRootNode(removeMe);
        }
        delete current;
    }
    if(removeMe == nullptr || removeMe->getRootNode() == nullptr)
    {
        this-> = removeMe;
    }
}

template <class Type
BianryTreeNode<Type> * BinarySearchTree<Type> :: getLeftMosetChild(BiarTreeNode<Type> * startingNode)
{
    BinaryTree<Type> * currentNode = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getLeftNode();
    }
    
    return previous;
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode = startngNode;
    BinaryTreeNode<Type> *  prevoius = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getRightNode();
    }
    
    return previous;
    
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * startingNode)
{
    BinaryTreeNode<Type> * currentNode = startingNode;
    BinaryTreeNode<Type> * previous = nullptr;
    while (currentNode != nullptr)
    {
        previous = currentNode;
        currentNode currentNode->geetRightNode();
    }
    
    return previous;
}

template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    assert(this->root != nullptr);
    return getLeftMostChild(this->root)->getData();
}
        
 template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    destroyTree(this->root);
}

template <class  Type>
void BinarySearchTree<Type> :: destroyTree(BinaryTreeNode<Type> * node)
{
    if(node != nullptr)
    {
        destroyTree(node->getLeftNode());
        destroyTree(node->getRightNode();
        delete node;
    }
}




#endif /* BinarySearchTree_h */
