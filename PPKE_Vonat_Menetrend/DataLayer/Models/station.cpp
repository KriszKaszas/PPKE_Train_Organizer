#include "station.h"

Station::Station(string name)
{
    SetName(name);
}

Station::~Station()
{

}

bool Station::SetName(string name)
{
    try
    {
        this->name = name;
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::SetAdjacentStations(set<Station> adjacentStations)
{
    try
    {
        this->adjacentStations = adjacentStations;
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::SetStationsTraverseableFromThisOrigin(set<Station> traverseableStationsFromThisOrigin)
{
    try
    {
        this->stationsTraverseableFromThisOrigin = traverseableStationsFromThisOrigin;
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::SetTrainsGoingThroughThisStation(set<Train> trainsGoingThroughThisStation)
{
    try
    {
        this->trainsGoingThroughThisStation = trainsGoingThroughThisStation;
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::AddTrainCurrentlyHere(Train arrivingTrain)
{
    try
    {
        trainsCurrentlyHere.insert(arrivingTrain);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::RemoveTrainCurrentlyHere(Train departingTrain)
{
    try
    {
        trainsCurrentlyHere.erase(departingTrain);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::AddCoachCurrentlyHere(Coach arrivingCoach)
{
    try
    {
        coachesCurrentlyHere.insert(arrivingCoach);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::RemoveCoachCurrentlyHere(Coach departingCoach)
{
    try
    {
        coachesCurrentlyHere.erase(departingCoach);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::AddProductCurrentlyHere(Product arrivingProduct)
{
    try
    {
        productsCurrentlyHere.insert(arrivingProduct);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

bool Station::RemoveProducTCurrentlyHere(Product departingProduct)
{
    try
    {
        productsCurrentlyHere.erase(departingProduct);
        return true;
    }

    catch (exception)
    {
        return false;
    }
}

string Station::GetName()
{
    return name;
}

set<Station> Station::GetAdjacentStations()
{
    return adjacentStations;
}

set<Station> Station::GetStationsTraverseableFromThisOrigin()
{
    return stationsTraverseableFromThisOrigin;
}

set<Train> Station::GetTrainsGoingThroughThisStation()
{
    return trainsGoingThroughThisStation;
}

set<Train> Station::GetTrainsCurrentlyHere()
{
    return trainsCurrentlyHere;
}

set<Coach> Station::GetCoachesCurrentlyHere()
{
    return coachesCurrentlyHere;
}

set<Product> Station::GetProductsCurrentlyHere()
{
    return productsCurrentlyHere;
}
