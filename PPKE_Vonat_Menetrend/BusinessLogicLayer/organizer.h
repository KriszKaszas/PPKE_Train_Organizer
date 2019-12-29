#ifndef ORGANIZER_H
#define ORGANIZER_H

//Project defined type file inclusions

#include "DataLayer/Models/schedule.h"
#include "optimizer.h"

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class Organizer
{
public:

    //Constructor and destructor declarations

    Organizer();
    ~Organizer();

    //Instance field declarations



    //Instance method declarations

    Schedule GetSchedule();
    bool Organize(vector<QString> trains, vector<QString> coaches, vector<QString> products);

private:

    //Instance field declarations

    Schedule schedule;
    Optimizer optimizer;

    //Instance method declarations

   bool SetSchedule();
};

#endif // ORGANIZER_H
