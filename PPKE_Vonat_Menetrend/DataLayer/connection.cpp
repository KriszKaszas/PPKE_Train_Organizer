#include "connection.h"

Connection::Connection()
{
    dataManager = new DataManager();
}

Connection::~Connection()
{
    delete dataManager;
}

bool Connection::GetStartingData(vector<string> Filepaths)
{
    //mocked
    try
    {
        this->trains = dataManager->ReadTrainsFromFile(Filepaths[0]);
        this->coaches = dataManager->ReadCoachesFromFile(Filepaths[1]);
        this->products = dataManager->ReadProductsFromFile(Filepaths[2]);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Connection::SaveScheduleInFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData)
{
    try
    {

    }

    catch (exception)
    {

    }
}

vector<Train> Connection::GetTrains()
{
    return trains;
}

vector<Coach> Connection::GetCoaches()
{
    return coaches;
}

vector<Product> Connection::GetProducts()
{
    return products;
}
