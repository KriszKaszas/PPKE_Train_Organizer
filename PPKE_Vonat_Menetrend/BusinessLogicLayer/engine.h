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
#include <QString>

class Engine
{
public:

    //Constructor and destructor declarations

    Engine();
    ~Engine();

private:

    //Instance field declarations

    Connection connection;
    UIManager ui;
    OutputManager output;

    //Instance method declarations

    bool DisplayData(QString message);
    bool DisplayData(vector<vector<QString>> ProcessedData);
    QString GetUserInput(QString request);
    bool InitializeStartingData(vector<QString> Filepaths);
    bool BuildSchedule();
    bool SaveScheduleToFile(QString outputFilepath, QString FileName, vector<vector<QString>> ProcessedData);

};

#endif // ENGINE_H
