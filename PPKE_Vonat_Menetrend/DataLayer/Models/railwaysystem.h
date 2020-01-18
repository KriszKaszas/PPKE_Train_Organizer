#ifndef RAILWAYSYSTEM_H
#define RAILWAYSYSTEM_H

//Project defined type file inclusions

#include "DataLayer/Models/train.h"

//C++ type inclusions

#include <vector>
#include <string>

using namespace std;

class RailwaySystem
{
public:

    //Constructor and destructor declarations

    RailwaySystem(vector<Train> trains);
    ~RailwaySystem();

    //Instance field declarations



    //Instance method declarations

    vector<string> GetStations();

private:

    //Instance field declarations

    vector<string> stations;

    //Instance method declarations

    bool SetStations(vector<Train> trains);
};

#endif // RAILWAYSYSTEM_H
