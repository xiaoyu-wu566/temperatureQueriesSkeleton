/*
 * TemperatureData.h
 *
 *  Created on: Jul 16, 2018
 *      Author: student
 */

#ifndef TEMPERATUREDATA
#define TEMPERATUREDATA
#include <string>
#include <iostream>

using namespace std;

struct TemperatureData {
	// Put data members here
    string id;
    int year;
    int month;
    double temperature;
    
	TemperatureData();  //constructor
	TemperatureData(string ID, int Year, int Month, double Temperature); //constructor
	virtual ~TemperatureData();  //destructor
	bool operator<(const TemperatureData& b); //compare data, if < is true, else is false
};

#endif /* TEMPERATUREDATA */
