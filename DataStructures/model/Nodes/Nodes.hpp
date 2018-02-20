//
//  Nodes.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 2/2/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Nodes_hpp
#define Nodes_hpp

 

//this section is avaible to all the subclasses of node
protected:
    Type data;

public:
    Node();
    Node (Type data);
    void setData(Type data);
    Type getData();
};
template <class Type>
Node<Type> :: Node()
{
    //needed for defualt constructor complication
    //since when we create a stucture it does not have an item to store yet
}
template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}
template <class Type>
void ode<Type> :: setData(Type data)
{
    this->data = data)
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

#endif /* Nodes_hpp */
