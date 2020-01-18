#ifndef DATAMANAGER_H
#define DATAMANAGER_H

//Project defined type file inclusions

#include "Models/train.h"
#include "Models/coach.h"
#include "Models/product.h"
#include "Models/schedule.h"

//Qt type declarations

#include <QFile>


//C++ type inclusions

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class DataManager
{
public:

    //Constructor and destructor declarations

    DataManager();
    ~DataManager();

    //Instance method declarations

    vector<Train> ReadTrainsFromFile(string filepath);
    vector<Coach> ReadCoachesFromFile(string filepath);
    vector<Product> ReadProductsFromFile(string filepath);
    bool WriteToFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData);
};

#endif // DATAMANAGER_H
