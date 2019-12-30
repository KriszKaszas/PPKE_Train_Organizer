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
    delete output;
}

bool Engine::DisplayData(string message)
{

}

bool Engine::DisplayData(vector<vector<string>> ProcessedData)
{

}

string Engine::GetUserInput(string request)
{

}

bool Engine::InitializeStartingData(vector<string> Filepaths)
{

}

bool Engine::BuildSchedule(vector<Train> trains, vector<Coach> coaches, vector<Product> products)
{

}

bool Engine::SaveScheduleToFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData)

