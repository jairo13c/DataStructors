//
//  Controller.cpp
//  Data Structures
//
//  Created by Cortez, Jairo on 1/31/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#include "Controller.hpp"
using namespace std;

void Controller :: start()
{
    
    RecursionTester test;
    test.testRecursionNumbers();
    test.testRecursionString();

}
void Controller :: testStacksAndQueues()
{
    
}
void Controller :: findMaxAndMin()
{
    
}
void Controller :: testArray()
{
    Array<int> jairoArray(45);
    
    jairoArray[0] = 123;
    jairoArray.setAtIndex(0, 321);
    
    cout << jairoArray[0]<< endl;
}





