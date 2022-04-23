#pragma once
#include <string>
#ifndef shipping_H
#define shippinh_H

using namespace std;

class shipping
{
private:
	string source;
	string destination;
	string lorryType;
	double costToShip;


public:

	void setSource(string sou);
	void setDestination(string des);
	void setLorryType(string lorry);
	void setCost(double cost);
	string getSource();
	string getDestination();
	string getlorryType();
	double getCostToShip();
};

#endif