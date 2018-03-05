//
//  LinkedListTester.cpp
//  Data Structures
//
//  Created by Cortez, Jairo on 2/20/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#include "LinkedListTester.hpp"

void LinkedListTester :: testerListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout  << numbers.getEnd()->getData() << " is at the end of the lis end should be 9"<< endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout  << numbers.getEnd()->getData() << " is at the end of the lis end should be 0"<< endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout  << numbers.getEnd()->getData() << " is at the end of the lis end should be 324"<< endl;
    
    cout << "this loop should print 4 lines"<< endl;
    for (int index = 0; index < numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0,2312);
    
    cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << endl;
    cout  << numbers.getEnd()->getData() << " is at the end of the lis end should be 0"<< endl;
    
}
