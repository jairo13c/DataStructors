//
//  FileController.hpp
//  Data Structures
//
//  Created by Cortez, Jairo on 1/31/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp


#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "LinkedList.hpp"

#include "../Data/CrimeData.hpp"

using namespace std;

class FlieController
{

public:
    static LinkedList<CrimeData> readToList(string filename);
};
LinkedList<CrimeData> FlieController :: (string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "No File" << endl;
    }
    
    return crimes;
}


#endif /* FileController_hpp */
