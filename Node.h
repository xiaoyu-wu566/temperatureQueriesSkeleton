#ifndef NODE
#define NODE

#include "TemperatureData.h"
using namespace std;

struct Node {
	TemperatureData data;
	Node* next;

	// Default constructor
	Node(); // remember to initialize next to nullptr
	Node(string ID, int Year, int Month, double Temperature); // remember to initialize next to nullptr

	// This operator will allow you to just ask if a node is smaller than another
	//  rather than looking at all of the location, temperature and date information
	bool operator<(const Node& b);

  // The function below is written. Do not modify it
	virtual ~Node() {}
};

#endif
