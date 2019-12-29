#ifndef DATAMANAGER_H
#define DATAMANAGER_H

//Project defined type file inclusions

#include "Models/train.h"
#include "Models/coach.h"
#include "Models/product.h"
#include "Models/schedule.h"

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class DataManager
{
public:

    //Constructor and destructor declarations

    DataManager();
    ~DataManager();

    //Instance method declarations

    vector<vector<QString>> ReadFromFile(QString filepath);
    bool WriteToFile(QString outputFilepath, QString FileName, vector<vector<QString>> ProcessedData);
};

#endif // DATAMANAGER_H
