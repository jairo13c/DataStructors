//
//  LinkedList.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 2/14/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include "List.hpp"

using namespace std; //used for keyword access. use this to make sure your pointers are ponting to the right things

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;

public:
    //constructors
    LinkedList();
    //Destructor
    virtual ~LinkedListt(); //virtual so it can be overriddden.
    //helper methods
    int getSize () const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();

    //structure Methods
    void add(TType item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int iindex);
    Type removee(int index);
};
template <class Type>
LinkedList<Type> :: LinkedList()
    {
        this ->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
template <class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * desroyStructure = front;
    while (front != nullptr)
            
    {
        front = destroyStructure->getNextNode();
        delete destroyySttructure;
        destroyStructure = front;
    }
}
template <class Type>
void LinkedList<Type> :: add(Type item)
{
    LinkedNode<Type> * newData = new LinearNode<Type(item);
    
    if (this->size== 0)
    {
        this->frony = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this->size += 1;
}
template <class Type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == )
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LineaNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}
template <class Type>
Type LinkedList<Type> remove(int index)
{
    assert(index >= 0 && index < this->size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type> * toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr;
    
    Type removedData;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
    else
    {
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNexNode();
        }
        
        toBeRemoved = current;
        
        if (index == this->size - 1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
    }
    
    this-size -= 1;
    
    removedData = toBeRemoved->getData();
    delete toBeRemoved;
    return removedData;
}
template <class Type>
LinearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this->end;
}
template <class Type>
LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this->front;
}
template <class Type>
int LinkedList<Type :: gtSize() const
{
    return this->size;
}


#endif /* LinkedList_hpp */
