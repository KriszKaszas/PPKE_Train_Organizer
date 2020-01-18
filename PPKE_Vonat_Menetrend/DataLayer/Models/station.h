#ifndef STATION_H
#define STATION_H

//Project defined type file inclusions

#include "train.h"
#include "coach.h"
#include "product.h"

//C++ type inclusions

#include <vector>
#include <string>
#include <set>

using namespace std;

class Station
{
public:

    //Constructor and destructor declarations

    Station(string name);
    ~Station();

    //Instance field declarations



    //Instance method declarations

    //Setters
    bool SetName(string name);
    bool SetAdjacentStations(set<Station> adjacentStations);
    bool SetStationsTraverseableFromThisOrigin(set<Station> traverseableStationsFromThisOrigin);
    bool SetTrainsGoingThroughThisStation(set<Train> trainsGoingThroughThisStation);
    bool AddTrainCurrentlyHere(Train arrivingTrain);
    bool RemoveTrainCurrentlyHere(Train departingTrain);
    bool AddCoachCurrentlyHere(Coach arrivingCoach);
    bool RemoveCoachCurrentlyHere(Coach departingCoach);
    bool AddProductCurrentlyHere(Product arrivingProduct);
    bool RemoveProducTCurrentlyHere(Product departingProduct);

    //Getters
    string GetName();
    set<Station> GetAdjacentStations();
    set<Station> GetStationsTraverseableFromThisOrigin();
    set<Train> GetTrainsGoingThroughThisStation();
    set<Train> GetTrainsCurrentlyHere();
    set<Coach> GetCoachesCurrentlyHere();
    set<Product> GetProductsCurrentlyHere();


private:

    //Instance field declarations

    string name;
    set<Station> adjacentStations;
    set<Station> stationsTraverseableFromThisOrigin;
    set<Train> trainsGoingThroughThisStation;
    set<Train> trainsCurrentlyHere;
    set<Coach> coachesCurrentlyHere;
    set<Product> productsCurrentlyHere;


    //Instance method declarations
};

#endif // STATION_H
