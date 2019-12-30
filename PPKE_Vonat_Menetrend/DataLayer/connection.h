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
#include <string>

using namespace std;

class Connection
{
public:

    //Constructor and destructor declarations

    Connection();
    ~Connection();

    //Instance method declarations

    bool GetStartingData(vector<string> Filepaths);
    bool SaveScheduleInFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData);
    vector<Train> GetTrains();
    vector<Coach> GetCoaches();
    vector<Product> GetProducts();

private:

    //Instance field declarations

    vector<Train> trains;
    vector<Coach> coaches;
    vector<Product> products;
    DataManager* dataManager;

    //Instance method declarations
};

#endif // CONNECTION_H
