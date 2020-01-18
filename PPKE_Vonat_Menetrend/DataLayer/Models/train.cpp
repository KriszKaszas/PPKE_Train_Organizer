#include "train.h"

Train::Train(string id, int coachCapacity, vector<string> trainSchedule)
{
    SetId(id);
    SetCoachCapacity(coachCapacity);
    //SetTrainSchedule(trainSchedule);
}

Train::~Train()
{

}

string Train::GetId()
{
    return id;
}

int Train::GetCoachCapacity()
{
    return coachCapacity;
}

vector<map<string, int>> Train::GetTrainSchedule()
{
    return trainSchedule;
}

bool Train::SetId(string id)
{
    try
    {

       return true;
    }
    catch (exception)
    {
        return false;
    }
    this->id = id;

}

bool Train::SetCoachCapacity(int coachCapacity)
{
    try
    {
        this->coachCapacity = coachCapacity;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}

bool Train::SetTrainSchedule(Schedule trainSchedule)
{
    try
    {
        this->trainSchedule = trainSchedule;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
