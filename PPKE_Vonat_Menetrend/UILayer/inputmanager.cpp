#include "inputmanager.h"

InputManager::InputManager()
{

}

InputManager::~InputManager()
{

}

bool InputManager::DisplayRequestPrompt(string requestPrompt)
{
    try
    {
        cout<<requestPrompt<<endl;
        cout<<endl;
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

string InputManager::GetUserInput()
{
    string userInput;
    cin >> userInput;
    return userInput;
}

