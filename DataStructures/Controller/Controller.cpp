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
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "look code on screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for(int index = 0; index < 500; index++)
    {
        cout << "index is" << index << "\t";
    
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
