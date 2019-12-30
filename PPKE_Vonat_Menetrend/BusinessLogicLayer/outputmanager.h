#ifndef OUTPUTMANAGER_H
#define OUTPUTMANAGER_H

//Project defined type file inclusions

#include "DataLayer/Models/schedule.h"
#include "optimizer.h"

//C++ type inclusions

#include <vector>
#include <string>

using namespace std;

class OutputManager
{
public:

    //Constructor and destructor declarations

    OutputManager();
    ~OutputManager();

    //Instance field declarations



    //Instance method declarations

    vector<vector<string>> ScheduleToString(Schedule schedule);

private:

    //Instance field declarations



    //Instance method declarations


};

#endif // OUTPUTMANAGER_H
