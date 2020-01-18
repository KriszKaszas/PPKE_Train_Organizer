#include "product.h"

Product::Product(string name, string originStation, string destinationStation, int quantity)
{
    SetName(name);
    SetOriginStation(originStation);
    SetDestinationStation(destinationStation);
    SetQuantity(quantity);
}

Product::~Product()
{

}

string Product::GetName()
{
    return name;
}

string Product::GetOriginStation()
{
    return originStation;
}

string Product::GetDestinationStation()
{
    return destinationStation;
}

int Product::GetQuantity()
{
    return quantity;
}

bool Product::SetName(string name)
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

bool Product::SetOriginStation(string originStation)
{
    try
    {
        this->originStation = originStation;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}

bool Product::SetDestinationStation(string destinationStation)
{
    try
    {
        this->destinationStation = destinationStation;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}

bool Product::SetQuantity(int quantity)
{
    try
    {
        this->quantity = quantity;
        return true;
    }
    catch (exception)
    {
        return false;
    }
}
