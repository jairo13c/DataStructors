//
//  Controller.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 1/31/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../model/Array.hpp"

#include "../Testers/ArrayTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "../Testers/TestStacksAndQueues.hpp"
#include "../Testers/RecursionTester.hpp"

class Controller
{
private:
    void findMaxAndMin();
    void testArray();
public:
    void start();
};
#endif /* Controller_hpp */
