#include "Phonelist.h"
#include <iomanip> 

// COMP 333 - Assignment 3
// Taylor Evans - 4373570
// This program implements a linked list for managing a phone list. It supports
// adding, removing, and displaying directories containing names, area codes,
// and phone numbers. The list is dynamically managed to prevent memory leaks.

// Constructor: Initializes the phone list
PhoneList::PhoneList(const string& listTitle) {
    title = listTitle;
    numDirectories = 0;
    firstPtr = NULL;
}

// Destructor: Deletes all nodes in the linked list
PhoneList::~PhoneList() {
    Directory* current = firstPtr;
    while (current != NULL) {
        Directory* temp = current;
        current = current->link;
        delete temp;
    }
    firstPtr = NULL;
}

// Displays the phone list with formatting
void PhoneList::showList(ostream& out) const {
    out << "Phone List Title: " << title << endl;

    out << left << setw(20) << "Name"
        << setw(10) << "Area Code"
        << "Phone Number" << endl;

    Directory* walker = firstPtr;
    while (walker != NULL) {
        out << left << setw(20) << walker->name
            << setw(10) << walker->areaCode
            << walker->phoneNo << endl;
        walker = walker->link;
    }

    out << endl << "Total number of directories: " << numDirectories 
        << endl << endl;
}

// Adds a new directory in alphabetical order
void PhoneList::addDirectory(const string& name, int areaCode, int phoneNo) {
    Directory* builder = new Directory;
    assert(builder);
    builder->name = name;
    builder->areaCode = areaCode;
    builder->phoneNo = phoneNo;
    builder->link = NULL;

    Directory* walker = firstPtr;   // Start at the beginning of the list
    Directory* stalker = NULL;     // Stalker trails one step behind walker

    // Check for duplicates and find the insertion point
    while (walker != NULL) {
        if (walker->name == name) {
            cout << "Directory with name " << name 
                 << " already exists, not added." << endl << endl;
            delete builder; 
            return;
        }
        if (walker->name > name) {
            break; // Found the insertion point
        }
        stalker = walker;
        walker = walker->link;
    }

    // Insert the new node
    if (stalker == NULL) {
        // Insert at the beginning
        builder->link = firstPtr;
        firstPtr = builder;
    }
    else {
        // Insert in the middle or end
        builder->link = walker;
        stalker->link = builder;
    }

    numDirectories++; 
    cout << name << " was added to the directory successfully." << endl;
    cout << "Number of directories: " << numDirectories << endl << endl;
}

// Removes a directory by name
void PhoneList::removeDirectory(const string& name) {
    if (firstPtr == NULL) {
        cout << "The directory is empty. Cannot remove " << name << "." 
             << endl << endl;
        return; 
    }

    Directory* walker = firstPtr;   // Start at the beginning of the list
    Directory* stalker = NULL;     // Stalker trails one step behind walker

    while (walker != NULL) {
        if (walker->name == name) {
            if (stalker == NULL) {
                firstPtr = walker->link;
            }
            else {
                stalker->link = walker->link;
            }
            delete walker;
            numDirectories--; 
            cout << name << " was successfully removed from the directory." 
                 << endl;
            cout << "Number of directories: " << numDirectories 
                 << endl << endl;
            return; 
        }
        stalker = walker;
        walker = walker->link;
    }

    cout << "Directory with name " << name << " not found. Cannot remove." 
         << endl << endl;
}


