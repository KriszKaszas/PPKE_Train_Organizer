#ifndef ENGINE_H
#define ENGINE_H

//Project defined type file inclusions

#include "DataLayer/Models/train.h"
#include "DataLayer/Models/coach.h"
#include "DataLayer/Models/product.h"
#include "DataLayer/Models/schedule.h"
#include "DataLayer/connection.h"
#include "UILayer/uimanager.h"
#include "outputmanager.h"

//C++ type inclusions

#include <vector>
#include <string>

class Engine
{
public:

    //Constructor and destructor declarations

    Engine();
    ~Engine();

    //Instance method declarations
    bool Init();

private:

    //Instance field declarations

    Connection* connection;
    UIManager* ui;
    OutputManager* output;

    //Instance method declarations

    bool DisplayData(string message);
    bool DisplayData(vector<vector<string>> ProcessedData);
    string GetUserInput(string request);
    bool InitializeStartingData(vector<string> Filepaths);
    bool BuildSchedule(vector<Train> trains, vector<Coach> coaches, vector<Product> products);
    bool SaveScheduleToFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData);

};

#endif // ENGINE_H
