#include "cargo.h"
#include <iostream>
#include <string>
#include <fstream> //file handling
#include <string.h>



	void cargo::setCargoWeight(int wei) {
		cargoWeight = wei;
	}

	int cargo::getCargoWeight() {
		return cargoWeight;
	}

	void cargo::setCargoHeight(int hei) {
		cargoHeight = hei;

	}

	int cargo::getCargoHeight() {
		return cargoHeight;
	}

	void cargo::setCargoState(string sta) {
		state = sta;
	}

	string cargo::getCargoState() {
		return state;
	}


	void cargo::setCargoLength(int len) {
		cargoLength = len;
	}

	int cargo::getCargoLength() {
		return cargoLength;

	}

	void cargo::setCargoWidth(int wid) {
		cargoWidth = wid;
	}

	int cargo::getCargoWidth() {
		return cargoWidth;
	}
	void cargo::setCargoName(string nam) {
		cargoName = nam;
	}
	string cargo::getCargoName() {
		return cargoName;
	}

	//setting and getting the variables of the cargo will be used for shipping rates and to handle data using OOP(object oreination)


