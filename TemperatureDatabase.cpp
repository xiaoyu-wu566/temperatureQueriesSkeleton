#include "TemperatureDatabase.h"

#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int currentYear = 2018;
// Default constructor/destructor. Modify them if you need to.
TemperatureDatabase::TemperatureDatabase() {}
TemperatureDatabase::~TemperatureDatabase() {}

void TemperatureDatabase::loadData(const string& filename) {
	// Implement this function for part 1
    ifstream inFS;
    string ID;
    int Year;
    int Month;
    double Temperature;
    inFS.open(filename.c_str());
    if(!inFS.is_open())
    {
        cout << "Error: Unable to open input.dat" << endl;
        return;
    }
    while(!inFS.eof())
    {
        string str = "";
        getline(inFS, str);  //read one line's elements
        if(str == "" )
        {
            cout << records;
            return;
        }
        
        //split string str into four pieces and assign them into ID, Year, Month, Temperature
        string buf;
        stringstream ss(str);
        vector <string> tokens;
        while(ss >> buf)
        {
            tokens.push_back(buf);
        }
        if(tokens.size() != 4) // missing at least one element in ID, Year, Month, Temperature
        {
            cout << "Error: Other invalid input" << endl;
        }
        else
        {
            ID = tokens.at(0);
            Year = stoi(tokens.at(1));
            Month = stoi(tokens.at(2));
            Temperature = stod(tokens.at(3));
            if(Year < 1800 || Year > currentYear)
            {
                cout << "Error: Invalid year " << Year << endl;
            }
            else if(Month < 1 || Month > 12)
            {
                cout << "Error: Invalid month " << Month << endl;
            }
            else if((Temperature < -50.0 || Temperature > 50.0) && Temperature != -99.99)
            {
                cout << "Error: Invalid temperature " << Temperature << endl;
            }
            else if(Temperature == -99.99)
            {
                cout << "Error: Other invalid input" << endl;
            }
            else
            {
                records.insert(ID, Year, Month, Temperature);
            }
        }
    }
   // cout << records;
}

void TemperatureDatabase::performQuery(const string& filename) {
	// Implement this function for part 2
	//  Leave it blank for part 1
}
