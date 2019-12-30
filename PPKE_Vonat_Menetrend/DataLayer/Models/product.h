#ifndef PRODUCT_H
#define PRODUCT_H

//C++ type inclusions

#include <vector>
#include <QString>

using namespace std;

class Product
{
public:

    //Constructor and destructor declarations

    Product();
    ~Product();
    //Instance field declarations



    //Instance method declarations

    QString GetName();
    QString GetOriginStation();
    QString GetDestinationStation();
    int GetQuantity();

private:

    //Instance field declarations

    QString name;
    QString originStation;
    QString destinationStation;
    int quantity;

    //Instance method declarations

    bool SetName(QString name);
    bool SetOriginStation(QString originStation);
    bool SetDestinationStation(QString destinationStation);
    bool SetQuantity(int quantity);
};

#endif // PRODUCT_H
