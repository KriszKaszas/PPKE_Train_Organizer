#ifndef UIMANAGER_H
#define UIMANAGER_H

//Project defined type file inclusions

#include "displaymanager.h"
#include "inputmanager.h"

//C++ type inclusions

#include <vector>
#include <string>

using namespace std;

class UIManager
{
public:

    //Constructor and destructor declarations

    UIManager();
    ~UIManager();

    //Instance field declarations



    //Instance method declarations

    bool DisplayOutput(string message);
    bool DisplayOutput(vector<vector<string>> ProcessedData);
    string GetUserInput(string requestPrompt);


private:

    //Instance field declarations

    DisplayManager* displayManager;
    InputManager* inputManager;

    //Instance method declarations

};

#endif // UIMANAGER_H
