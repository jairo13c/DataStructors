//
//  HashNode.h
//  Data Structures
//
//  Created by Cortez, Jairo on 4/27/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef HashNode_h
#define HashNode_h

#include "Node.hpp"

template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    hashNode();
    HashNode(Type data);
    
    long getKey() const;
};

template <class Type>
HashNode<Type :: HashNode()
{
    this->key = 0;
}

template <class Type>
HAshNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this-> key = (long) &data;
}

template <class Type>
long HaaashNode<Typpe> :: getKey() const
{
    return this->key;
}



#endif /* HashNode_h */
