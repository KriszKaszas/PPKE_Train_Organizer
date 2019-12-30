#ifndef COACH_H
#define COACH_H

//C++ type inclusions

#include <vector>
#include <string>

using namespace std;

class Coach
{
public:

    //Constructor and destructor declarations

    Coach();
    ~Coach();

    //Instance field declarations



    //Instance method declarations

    bool SetStation(string station);
    string GetId();
    int GetCapacity();
    string GetStation();

private:

    //Instance field declarations

    string id;
    int capacity;
    string station;

    //Instance method declarations

    bool SetId(string id);
    bool SetCapacity(int capacity);
};

#endif // COACH_H
