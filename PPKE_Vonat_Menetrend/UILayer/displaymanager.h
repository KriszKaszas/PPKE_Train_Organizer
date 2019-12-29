#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class DisplayManager
{
public:

    //Constructor and destructor declarations

    DisplayManager();
    ~DisplayManager();

    //Instance field declarations



    //Instance method declarations

    bool DisplayOutput(QString message);
    bool DisplayOutput(vector<vector<QString>> ProcessedData);


private:

    //Instance field declarations


    //Instance method declarations

};

#endif // DISPLAYMANAGER_H
