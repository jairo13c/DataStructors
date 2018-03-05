//
//  RecursionTester.cpp
//  Data Structures
//
//  Created by Cortez, Jairo on 3/5/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if ( number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return fib (number - 1) + fib (number - 2);
    }
}
string RecursionTester :: mystery(string word)
{
    
}
void RecursionTester :: testRecursionNumbers()
{
    
}
void RecursionTester :: testRecursionString()
{
    
}
