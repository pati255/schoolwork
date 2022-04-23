#pragma once
#include <string>
#include <iostream>
#ifndef cargo_H
#define cargo_H


using namespace std;

class cargo //class for cargo
{
private:  //access specifer for class cargo
	int cargoWeight;
	int cargoHeight;
	string state;
	int cargoLength;
	int cargoWidth;
	string cargoName;

public: //public identifiers allowing to access private data from the class
	
	void setCargoWeight(int wei);
	int getCargoWeight();
	void setCargoHeight(int hei);
	int getCargoHeight();
	void setCargoState(string state);
	string getCargoState();
	void setCargoLength(int len);
	int getCargoLength();
	void setCargoWidth(int wid);
	int getCargoWidth();
	void setCargoName(string nam);
	string getCargoName();
	
};




#endif 