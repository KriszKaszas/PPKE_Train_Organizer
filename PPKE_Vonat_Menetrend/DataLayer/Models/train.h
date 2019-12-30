#ifndef TRAIN_H
#define TRAIN_H

//C++ type inclusions

#include <vector>
#include <string>

using namespace std;

class Train
{
public:

    //Constructor and destructor declarations

    Train();
    ~Train();
    //Instance field declarations



    //Instance method declarations

    string GetId();
    int GetCoachCapacity();
    vector<string> GetTrainSchedule();

private:

    //Instance field declarations

    string id;
    int coachCapacity;
    vector<string> trainSchedule;

    //Instance method declarations

    bool SetId(string id);
    bool SetCoachCapacity(int coachCapacity);
    bool SetTrainSchedule(vector<string> trainSchedule);

};

#endif // TRAIN_H
