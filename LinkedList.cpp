#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Node.h"
using namespace std;

LinkedList::LinkedList() {
	// Implement this function
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList() {
	// Implement this function
    this->clear();
}


LinkedList::LinkedList(const LinkedList& source) {
	// Implement this function
    Node* curr = source.head;
    while(curr)
    {
        this->insert_back(curr->data.id, curr->data.year, curr->data.month, curr->data.temperature);
        curr = curr->next;
    }
}

LinkedList& LinkedList::operator=(const LinkedList& source) {
	// Implement this function
    this->clear();
    Node* curr = source.head;
    while(curr)
    {
        this->insert_back(curr->data.id, curr->data.year, curr->data.month, curr->data.temperature);
        curr = curr->next;
    }
    return *this;
}

void LinkedList::insert(string location, int Year, int Month, double Temperature) {
	// Implement this function
    Node* n = new Node(location, Year, Month, Temperature);
    if(head == nullptr) //there is no element in the LinkList
    {
        head = n;
        tail = n;
        return;
    }
    Node* prev = nullptr;
    Node* curr = head;
    while(curr)
    {
        if((curr->data < n->data))
        {
            prev = curr;
            curr = curr->next;
        }
        else
        {
            if(prev == nullptr)  //insert at first
            {
                prev = n;
                head = n;
            }
            else  //insert at middle
            {
                prev->next = n;
            }
            n->next = curr;
            return;
        }
    }
    //insert at back
    prev->next = n;
    tail = n;
}

// a function is used for copy constructor and copy assignment 
void LinkedList::insert_back(string location, int Year, int Month, double Temperature)
{
    Node* n = new Node(location, Year, Month, Temperature);
    if(head == nullptr)
    {
        head = n;
        tail = n;
        return;
    }
    Node* curr = head;
    while(curr->next)
    {
        curr = curr->next;
    }
    curr->next = n;
    tail = n;
}

void LinkedList::clear() {
	// Implement this function
    Node* curr = nullptr;
    while(head)
    {
        curr = head->next;
        delete head;
        head = curr;
    }
}

Node* LinkedList::getHead() const {
	// Implement this function it will be used to help grade other functions
    return head;
}

string LinkedList::print() const {
	string outputString = "";
    Node* curr = head;
    while(curr)
    {
        string stringTemperature;
        stringTemperature = to_string(curr->data.temperature);
        //remove trailing zeros
        stringTemperature.erase(stringTemperature.find_last_not_of('0') + 1, string::npos);
        //remove '.'
        stringTemperature.erase(stringTemperature.find_last_not_of('.') + 1, string::npos);
        outputString += curr->data.id + " " + to_string(curr->data.year) + " " + to_string(curr->data.month) + " " + stringTemperature + "\n";
        curr = curr->next;
    }
	// Implement this function
	return outputString;
}

ostream& operator<<(ostream& os, const LinkedList& ll) {
	/* Do not modify this function */
	os << ll.print();
	return os;
}
