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
    cout << "look code on the screen" <<endl;
    codeTimer.stopTimer();
    codeTimer.displayInformatin();
    codeTimer.resetTimer();
    codeTimer.startTimer
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jcor3400/Downloads/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for(int index 1; index < myData.size(); index++)
    {
        if(myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        
        if(myData [maxIndex] <myData[index])
        {
            maxIndex = index;
        }
        
    }
    searchTimer.stopTimer();
    cout << "the smallest crime start is at" <<minIndex << " and it is" <<myData[minIndex] << end1;
    cout << "the largest crimee sstart is at" << "and it is" << myData[maxIndex] << end1;
    searchTimer.dsplayInformation();
    
    
    
}

void Controller :: findMaxAndMin()
{
    
}
void Controller :: testArray()
{
    Array<int> jairoArray(45);
    
    jairoArray[0] = 123;
    jairoArray.setAtIndex(0, 321);
    
    cout << jairoArray[0]<<endl;
}





