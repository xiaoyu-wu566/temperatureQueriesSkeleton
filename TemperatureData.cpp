/*
 * TemperatureData.cpp
 *
 *  Created on: Jul 16, 2018
 *      Author: student
 */

#include "TemperatureData.h"
#include <string>
#include <iostream> 
using namespace std;

TemperatureData::TemperatureData()//initialize everything
{
    id = "";
    year = 0;
    month = 0;
    temperature = 0.0;
}
TemperatureData::TemperatureData(string ID, int Year, int Month, double Temperature)  //initialize everything
{
    id = ID;
    year = Year;
    month = Month;
    temperature = Temperature;
}

TemperatureData::~TemperatureData() {} // You should not need to implement this

bool TemperatureData::operator<(const TemperatureData& b) {
	// Implement this
    if(id < b.id)
    {
        return true;
    }
    else if(id == b.id)
    {
        if(year < b.year)
        {
            return true;
        }
        else if(year == b.year)
        {
            if(month < b.month)
            {
                return true;
            }
        }
    }
    return false;
}

