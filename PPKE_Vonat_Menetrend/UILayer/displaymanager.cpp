#include "displaymanager.h"

DisplayManager::DisplayManager()
{

}

DisplayManager::~DisplayManager()
{

}

bool DisplayManager::DisplayOutput(string message)
{
    try
    {
        cout<< message<<endl;
        cout<<endl;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}

bool DisplayManager::DisplayOutput(vector<vector<string>> ProcessedData)
{
    try
    {
        for(vector<string> DataLine : ProcessedData)
        {
            for(string Data : DataLine)
            {
                cout<<Data<<" | ";
            }
            cout<<endl;
        }
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
