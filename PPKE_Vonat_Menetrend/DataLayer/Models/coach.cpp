#include "coach.h"

Coach::Coach(string id, int capacity, string station)
{
    SetId(id);
    SetCapacity(capacity);
    SetStation(station);
}

Coach::~Coach()
{

}

string Coach::GetId()
{
    return id;
}

int Coach::GetCapacity()
{
    return capacity;
}

string Coach::GetStation()
{
    return station;
}

bool Coach::SetId(string id)
{
    try
    {
        this->id = id;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}

bool Coach::SetCapacity(int capacity)
{
    try
    {
        this->capacity = capacity;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}

bool Coach::SetStation(string station)
{
    try
    {
        this->station = station;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
