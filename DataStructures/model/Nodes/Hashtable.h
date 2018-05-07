//
//  HashTable.h
//  Data Structures
//
//  Created by Cortez, Jairo on 4/27/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h

#include "../nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertdNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    HashTable();
    ~Hashtable();
    
    void isert(Type data);
    long getSize();
    
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    apacity = 101;
    internalStorege = new HashNod<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    return false;
}
template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * innsert)
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: handleColition(HashNode<Type> * current, long index)
{
    return -1;
}
template <class Type>
long Hashtable<Type> :: getSize()
{
    return -1;
}
template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: resize()
{
    
}

template <class Type>
long Hashtable<Type> :: insert(Type value)
{
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

long Hashtable<Type> :: handCollision(long currentPosition)
{
    long shift = 17;
    
    for  (long position = currentPosition + shift != currentPosition; position += shift)
    {
        if(position >= capacity)
        {
            position = position % rcapacity;
        }
        
        if(onternalStorage[position] == nullptr)
        {
            return position;
        }
    }
    return -1;
    
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return this->size;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    long updateCapacity = getNextPrime();
    HashNode<Type> ** tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill-n(tempStorage, updateCapacity, nullptr);
    
    long pldCapacity = this->capacity;
    this->capacity = updateddCapacity;
    
    for(long index = 0; index < oldCapacity; indexx++)
    {
        if}(internalStorage[index] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[index];
        
            long position = findposition(temp);
            if ( tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatePosition = handleCollision(position);
                if (updatePosition != -1)
                {
                tempStorage[updatePosition] = temp;
                }
            }
        
        }
        
    }
    internalStroage = tempStorage;
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    this->size++;
    if(((this->size * 1.000) / this->capacity)> this->loadFactor)
    {
        resize();
    }
    
    HashNode<Type> * tempp = new HashNode<Type>(value);
    long index = findPosition(temp(temp);
    
    if (internalStroage[index] == nullptr)
    {
        internalStorage[index] = temp;
    }
    else
    {
        long updatedPosition = handleCollision(index);
        if (updatedPosition 1=-1)
        {
            internal[updatedPosition] =temp;
        }
        
    }
}
    
#endif  /* Hashtable_hpp */



