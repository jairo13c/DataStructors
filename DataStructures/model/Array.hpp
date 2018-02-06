//
//  Array.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 2/2/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp


#include <assert.h>
#include <iostream>

using namespace std;

template < class Type>
class Array
{
private:
    Type * internalArray;
    int size;
    
public:
    Array<Type>(int size);
    
    Array<Type>(const Array<Type> & toCopy);
    ~Array<Type>();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [](int index) const;
    
    int getSize() const;
    Type getFromIndex(int index);
    void setAIndex(int index, Type data);
};
    
    
template < class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}
template <class Type>
    Array<Tpye> :: Array(const Array<Type> & tpCopy)
    {
        this->size = copy.getSize();
        
        internalArray = new Type[size];
        
        for(int index = 0; index < size; indx++)
        {
            internalArray[index] = toCopy[index];
        }
    }
}

template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

template < class Type>
Array<Type> & Array> :: opeator = (const Array<Array> & toAssign)
{
    if (&toAssign != this)
    {
        if (size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
            
        }
        for (int index = o; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        
        }
        return *this;
    }
template <class Type>
Type& Array<Type> :: operator [] (int index)
{
    assert(index >= 0 && index < size);
    return intrernalArray[index];
}
template <classType>
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index <size);
    return internalArray[index];
}
template <clas Type>
int Array<Type> :: getSize() const
{
    return size;
}
    tempalte
    




#endif /* Array_hpp */
