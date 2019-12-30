#include "uimanager.h"

UIManager::UIManager()
{
    displayManager = new DisplayManager();
    inputManager = new InputManager;
}

UIManager::~UIManager()
{
    delete displayManager;
    delete inputManager;
}

bool UIManager::DisplayOutput(string message)
{
    try
    {
        displayManager->DisplayOutput(message);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool UIManager::DisplayOutput(vector<vector<string>> ProcessedData)
{
    try
    {
        displayManager->DisplayOutput(ProcessedData);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

string UIManager::GetUserInput(string requestPrompt)
{
    inputManager->DisplayRequestPrompt(requestPrompt);
    return inputManager->GetUserInput();
}


