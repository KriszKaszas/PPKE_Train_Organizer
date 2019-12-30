#ifndef PRODUCT_H
#define PRODUCT_H

//C++ type inclusions

#include <vector>
#include <string>

using namespace std;

class Product
{
public:

    //Constructor and destructor declarations

    Product();
    ~Product();
    //Instance field declarations



    //Instance method declarations

    string GetName();
    string GetOriginStation();
    string GetDestinationStation();
    int GetQuantity();

private:

    //Instance field declarations

    string name;
    string originStation;
    string destinationStation;
    int quantity;

    //Instance method declarations

    bool SetName(string name);
    bool SetOriginStation(string originStation);
    bool SetDestinationStation(string destinationStation);
    bool SetQuantity(int quantity);
};

#endif // PRODUCT_H
