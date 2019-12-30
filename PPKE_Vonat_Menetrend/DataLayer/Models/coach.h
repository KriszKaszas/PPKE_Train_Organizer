#ifndef COACH_H
#define COACH_H

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class Coach
{
public:

    //Constructor and destructor declarations

    Coach();
    ~Coach();

    //Instance field declarations



    //Instance method declarations

    bool SetStation(QString station);
    QString GetId();
    int GetCapacity();
    QString GetStation();

private:

    //Instance field declarations

    QString id;
    int capacity;
    QString station;

    //Instance method declarations

    bool SetId(QString id);
    bool SetCapacity(int capacity);
};

#endif // COACH_H
