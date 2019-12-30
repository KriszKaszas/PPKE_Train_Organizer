#ifndef ORGANIZER_H
#define ORGANIZER_H

//Project defined type file inclusions

#include "DataLayer/Models/schedule.h"
#include "optimizer.h"

//C++ type inclusions

#include <vector>
#include <string>

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
    bool Organize(vector<string> trains, vector<string> coaches, vector<string> products);

private:

    //Instance field declarations

    Schedule* schedule;
    Optimizer* optimizer;

    //Instance method declarations

};

#endif // ORGANIZER_H
