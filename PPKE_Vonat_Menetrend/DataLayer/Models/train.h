#ifndef TRAIN_H
#define TRAIN_H

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class Train
{
public:

    //Constructor and destructor declarations

    Train();
    ~Train();
    //Instance field declarations



    //Instance method declarations

    QString GetId();
    int GetCoachCapacity();
    vector<QString> GetTrainSchedule();

private:

    //Instance field declarations

    QString id;
    int coachCapacity;
    vector<QString> trainSchedule;

    //Instance method declarations

    bool SetId(QString id);
    bool SetCoachCapacity(int coachCapacity);
    bool SetTrainSchedule(vector<QString> trainSchedule);

};

#endif // TRAIN_H
