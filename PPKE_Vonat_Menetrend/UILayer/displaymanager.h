#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H

//C++ type inclusions

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class DisplayManager
{
public:

    //Constructor and destructor declarations

    DisplayManager();
    ~DisplayManager();

    //Instance field declarations



    //Instance method declarations

    bool DisplayOutput(string message);
    bool DisplayOutput(vector<vector<string>> ProcessedData);


private:

    //Instance field declarations



    //Instance method declarations

};

#endif // DISPLAYMANAGER_H
