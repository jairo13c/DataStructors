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
    static vector<CrimeData> readCrimeDataToVector(string filename);
};
vector<CrimeData> FlieController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at that path.
    if (dataFile.is_open())
    {
        //keep reading until ypu are at the end of the file.
        while (!dataFile.eof())
        {
            //grab each line from the csv separeted by the carriage return character.
            getline(dataFile,currentCSVLine, '\e');
            //exclusive header row
            if(rowCount != 0)
            {
                //created a crimeData instance from the line. exclusive a blanck line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
                    
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FLILE" << endl;
    }
    
    return crimeVector;
}

#endif /* FileController_hpp */
