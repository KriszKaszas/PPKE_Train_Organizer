#ifndef CONNECTION_H
#define CONNECTION_H

//Project defined type file inclusions

#include "Models/train.h"
#include "Models/coach.h"
#include "Models/product.h"
#include "Models/schedule.h"
#include "datamanager.h"

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class Connection
{
public:

    //Constructor and destructor declarations

    Connection();
    ~Connection();

    //Instance method declarations

    bool GetStartingData(vector<QString> Filepaths);
    bool SaveScheduleInFile(QString outputFilepath, QString FileName, vector<vector<QString>> ProcessedData);
    vector<Train> GetTrains();
    vector<Coach> GetCoaches();
    vector<Product> GetProducts();

private:

    //Instance field declarations

    vector<Train> trains;
    vector<Coach> coaches;
    vector<Product> products;
    DataManager dataManager;

    //Instance method declarations
};

#endif // CONNECTION_H
