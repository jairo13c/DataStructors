//
//  SortingTester.cpp
//  Data Structures
//
//  Created by Cortez, Jairo on 3/15/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector<CrimeData> & info, int low, int high)
{
    if(low < high)
    {
        int partitionPoint = partition(data, low, high);
        
        quickSort(data, low, partition(data - 1);
        quickSort(data, partitionPoint + 1, high);
   }
}
                  
int SortingTester :: partition(vector<CrimeData> & info, int low, int high)
{
    CrimeData pivotValue = info [high];
    int smallest = low - 1;
    
    for (int index= low; index < high - 1; index++)
    {
        if (info[index] < pivotValue)
        {
            smallest++;
            swap(info, smallest,index);
        }
    }
    swap(info, smallest + 1,high);
    return smallest + 1;
}

void SortingTester :: swap(vector<CrimeData> & info, int small, int large)
{
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
    swapCount++;
}

void SortingTester :: testSorts()
{
    Timer sortTimer;
    swapCount = 0;
    vector<CrimeData> data = FlieController :: readCrimeDataToVector("/Users/jcor3400/DataSources/DataStructors/DataStructures/Data/crime.csv");
    
    vector<CrimeData> smaller;
    for( int index = 0; index < 10000; index++)
    {
        smaller.push_back(data[index]);
    }
    
    sortTimer.startTimer();
    quickSort(smaller, 0, smaller.size());
    sortTimer.stopTimer();
    sortTimer.displayInformation();
    cout << " the number of swaps were: " << swapCount << endl;
    
}
            
     
