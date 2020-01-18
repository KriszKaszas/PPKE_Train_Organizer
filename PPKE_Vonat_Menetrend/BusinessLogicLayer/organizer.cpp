#include "organizer.h"

Organizer::Organizer()
{
    schedule = new Schedule();
    optimizer = new Optimizer();
}

Organizer::~Organizer()
{

}

bool Organizer::Organize(vector<string> trains, vector<string> coaches, vector<string> products)
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

Schedule Organizer::GetSchedule()
{
    return *schedule;
}
