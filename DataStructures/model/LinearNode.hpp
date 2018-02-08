//
//  LinearNode.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 2/8/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
    //this section is avaible to the subclasses of LinearNode
protected:
    LinearNode<Type> * next;
public:
    //contructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode <Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNode();
    //constructors
    /**
     This constructor is used for buildig the raw structures before values are known.
     */
    template <class Type>
    LinearNode<Type> :: LinearNode() : NodeType>()
    {
        this->next = nullptr;
    }
    /**
     this constructor is used to create a referance to a instance with data and a known link.
     */
    template <class Type>
    LinearNode<Type :: LinearNode(Type data) : Node<Type>(data)
    {
        this->next = nullptr;
    }
    template < class Type>
    LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
    {
        this->next = next;
    }
    template <class Type>
    void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer )
    {
        LinearNode<Type> * LinearNode<Type> :: getNextNode()
        {
            return next
        }
    }
    
    };

#endif /* LinearNode_hpp */
