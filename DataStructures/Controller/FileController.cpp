//
//  FileController.cpp
//  Data Structures
//
//  Created by Cortez, Jairo on 1/31/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FlieController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getting(dataFile, currentCSVLine, '\r');
            if ( rowCount! = 0)
            {
            if(currentCSVLine.lenght()!= 0)
                {
                    CrimeData ro(currentCSVLine);
                    CrimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << end;
    }
    
    return crimeVector;
}
