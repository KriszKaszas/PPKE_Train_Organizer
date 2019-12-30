#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

//C++ type inclusions

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputManager
{
public:

    //Constructor and destructor declarations

    InputManager();
    ~InputManager();

    //Instance field declarations



    //Instance method declarations

    bool DisplayRequestPrompt(string requestPrompt);
    string GetUserInput();

private:

    //Instance field declarations



    //Instance method declarations


};

#endif // INPUTMANAGER_H
