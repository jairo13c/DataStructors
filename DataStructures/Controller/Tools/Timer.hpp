//
//  Timer.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 1/31/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp


#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
    
private:
clock_t executionTime;

public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimerInMicroseconds();
};
#endif /* Timer_hpp */
