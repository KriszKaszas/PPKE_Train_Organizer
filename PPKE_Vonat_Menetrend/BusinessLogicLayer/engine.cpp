#include "engine.h"

Engine::Engine()
{
    connection = new Connection();
    ui = new UIManager();
    output = new OutputManager();
}

Engine::~Engine()
{
    delete connection;
    delete ui;
//    delete output;
}

//bool Engine::Init()
//{

//}

bool Engine::DisplayData(string message)
{
    try
    {
        ui->DisplayOutput(message);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Engine::DisplayData(vector<vector<string>> ProcessedData)
{
    try
    {
        ui->DisplayOutput(ProcessedData);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

string Engine::GetUserInput(string request)
{
    return ui->GetUserInput(request);
}

bool Engine::InitializeStartingData(vector<string> Filepaths)
{
    try
    {
        connection->GetStartingData(Filepaths);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Engine::BuildSchedule(vector<Train> trains, vector<Coach> coaches, vector<Product> products)
{
    try
    {
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Engine::SaveScheduleToFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData)
{
    try
    {
        return true;
    }

    catch (exception)
    {
        return false;
    }
}
