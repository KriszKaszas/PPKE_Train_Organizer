#ifndef TRAIN_H
#define TRAIN_H

//Project defined type file inclusions

#include "coach.h"
#include "product.h"
#include "schedule.h"

//C++ type inclusions

#include <map>
#include <vector>
#include <string>

using namespace std;

class Train
{
public:

    //Constructor and destructor declarations

    Train(string id, int coachCapacity, vector<string> trainSchedule);
    ~Train();
    //Instance field declarations



    //Instance method declarations


    string GetId();
    int GetCoachCapacity();
    bool SetNumberOfConnectedCoaches();
    int GetNumberOfConnectedCoaches();
    Schedule GetTrainSchedule();

private:

    //Instance field declarations

    string id;
    int coachCapacity;
    int numberOfConnectedCoaches;
    Schedule* trainSchedule;

    //Instance method declarations

    bool SetId(string id);
    bool SetCoachCapacity(int coachCapacity);
    bool SetTrainSchedule(vector<map<string, int>> trainSchedule);

};

#endif // TRAIN_H
