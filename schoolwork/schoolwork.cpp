// schoolwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream> //file handling
#include <string.h>
#include "cargo.h"




using namespace std;
void addCargo();
void viewCargo();


int main()
{
    addCargo();
    



}

void addCargo() {

    cargo container;
    int height, weight, width, length; //uses variables to store the inputs from the user int variables assigned
    string state, cargoName; //string variable assigned 
    cout << "------------------------------------------------------------\n" << endl; //for aesthetic purposes
    cout << "                 Cargo Registration form" << endl;
    cout << "------------------------------------------------------------\n" << endl;
    cout << "               Please enter the cargo name" << endl;
    cin >> cargoName;
    container.setCargoName(cargoName);
    cout << "------------------------------------------------------------\n" << endl;
    cout << "               Please enter the cargo Height" << endl;
    cin >> height;
    container.setCargoHeight(height);
    cout << "------------------------------------------------------------\n" << endl;
    cout << "              Please enter the cargo Width" << endl;
    cin >> weight;
    container.setCargoWeight(weight); //storing our weight within the class private weight of the cargo
    
    cout << "------------------------------------------------------------\n" << endl;
    cout << "             Please enter the cargo Length" << endl;
    cin >> length;
    container.setCargoLength(length);
    cout << "------------------------------------------------------------\n" << endl;
    cout << "            Please enter the cargo Weight" << endl;
    cin >> width;
    container.setCargoWidth(width);
    cout << "------------------------------------------------------------\n" << endl;
    cout << "           Please enter the cargo state" << endl;
    cout << "       Your options are: frozen, liquid,gas,solid" << endl;
    cin >> state;
    container.setCargoState(state);
    try { //uses error handling to make sure the correct state is inputed
        if (state == "frozen" || "liquid" || "gas" || "solid") {
            cout << "State accepted";

        }
        else {
            throw (state); //if the state is not one of the above the state is thrown to be caught
        }
    }
    catch (string invalid) { //input caught and displayed with error message
        cout << "State denied, state can only frozen,solid,liquid,gas\n";
        cout << "state given:" << invalid;
    }



    cout << "\n Shipping rate charging:" << endl;






























    ofstream cargoInfo("cargo.txt", ios::app); //creating a file for cargo info , added appending to stop data over riding the inital data which means all data will be stored permanently

    cargoInfo << height  <<","<<weight << "," << length << ","<< width << "," << state <<"," <<cargoName; //inputting all the details into it
    cargoInfo.close(); //closing file to release memory and not to hold it up

    cout << "\n You are done, now returning to Main Menu" << endl;
   
    
   
}




void viewCargo() {


    
    string cargoInformation; //string to store information once it's taken from a file
    ifstream cargoInfo("cargo.txt"); //opening file
    if (cargoInfo.is_open()) { //if statement to check if the file is open
        cargoInfo >> cargoInformation;
        cout << cargoInformation;
        //displays the information from the file to the console
    }




    string cargoArray[] = { cargoInformation }; //storing the details within an array

    for (auto el : cargoArray) cout << el << '\n'; //printing the array











}


