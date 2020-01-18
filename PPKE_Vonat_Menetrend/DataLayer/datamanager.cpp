#include "datamanager.h"

DataManager::DataManager()
{

}

DataManager::~DataManager()
{

}

vector<Train> DataManager::ReadTrainsFromFile(string filepath)
{
    //mocked
    vector<Train> trains;
    Train *V1 = new Train("V1", 2, {{"A", 1}, {"B", 1}, {"C", 2}, {"B", 2}, {"A", 2}});
    Train *V2 = new Train("V2", 4, {{"C", 1}, {"D", 3}, {"E", 2}, {"D", 2}, {"C", 4}});
    Train *V3 = new Train("V3", 3, {{"E", 1}, {"F", 2}, {"G", 1}, {"F", 1}, {"E", 3}});
    trains.push_back(*V1);
    trains.push_back(*V2);
    trains.push_back(*V3);
    return trains;
}

vector<Coach> DataManager::ReadCoachesFromFile(string filepath)
{
    //mocked
    vector<Coach> coaches;
    Coach *C1 = new Coach("C1", 20, "B");
    Coach *C2 = new Coach("C2", 40, "E");
    Coach *C3 = new Coach("C3", 30, "G");
    coaches.push_back(*C1);
    coaches.push_back(*C2);
    coaches.push_back(*C3);
    return coaches;
}

vector<Product> DataManager::ReadProductsFromFile(string filepath)
{
    //mocked
    vector<Product> products;
    Product *P1 = new Product("P1", "A", "C", 30);
    Product *P2 = new Product("P2", "B", "E", 50);
    Product *P3 = new Product("P3", "E", "F", 70);
    products.push_back(*P1);
    products.push_back(*P2);
    products.push_back(*P3);
    return products;
}

bool DataManager::WriteToFile(string outputFilepath, string FileName, vector<vector<string>> ProcessedData)
{
    try
    {

    }

    catch (exception)
    {

    }
}
