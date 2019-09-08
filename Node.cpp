#include <string>
#include "Node.h"

using namespace std;

// Default constructor
Node::Node(): data()  // remember to initialize next to nullptr
{
//    data.id = "";
//    data.year = 0;
//    data.month = 0;
//    data.temperature = 0.0;
    next = nullptr;
}

// Parameterized constructor
Node::Node(string ID, int Year, int Month, double Temperature): data(ID, Year, Month, Temperature)
// remember to initialize next to nullptr
{
//    data.id = ID;
//    data.year = Year;
//    data.month = Month;
//    data.temperature = Temperature;
    next = nullptr;
}

bool Node::operator<(const Node& b) {
	return this->data < b.data;
}
