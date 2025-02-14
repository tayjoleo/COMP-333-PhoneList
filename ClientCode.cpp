#include "Phonelist.h"

// COMP 333 - Assignment 3
// Taylor Evans - 4373570
// This program test the functionality of the PhoneList class. It tests
// adding, removing, and handling duplicate directories.

int main() {
    // Create the phone list
    PhoneList myList("Middle-earth");

    // 1. Initial State 
    cout << "INITIAL STATE TEST:" << endl;
    myList.showList(cout);
    cout << "Total number of directories: " << myList.getNoDirectories() 
         << endl << endl;

    // 2. Adding Nodes
    cout << "ADDING NODES TEST:" << endl;
    myList.addDirectory("Legolas", 123, 4567890);
    myList.addDirectory("Gimli", 456, 1234567);
    myList.addDirectory("Gandalf", 789, 9876543);
    myList.addDirectory("Aragorn", 111, 2223333);
    myList.showList(cout);

    // 3. Adding Duplicate Nodes
    cout << "ADDING DUPLICATE NODES TEST:" << endl;
    myList.addDirectory("Legolas", 123, 4567890); 
    myList.showList(cout);

    // 4. Removing Nodes 
    cout << "REMOVING NODES TEST:" << endl;
    myList.removeDirectory("Aragorn");  
    myList.removeDirectory("Gandalf"); 
    myList.removeDirectory("Legolas");
    myList.showList(cout);

    // 5. Removing Non-Existent Node
    cout << "REMOVING NON-EXISTANT NODES TEST:" << endl;
    myList.removeDirectory("Frodo");
    myList.showList(cout);

    // 6. Removing from Empty List
    cout << "REMOVING FROM EMPTY LIST TEST:" << endl;
    myList.removeDirectory("Gimli"); 
    myList.removeDirectory("Samwise"); 

    // 7. Calling All Functions 
    cout << "CALLING FUNCTIONS TEST:" << endl;
    cout << "Phone List Title: " << myList.getTitle() << endl;
    cout << "Number of Directories: " << myList.getNoDirectories() 
         << endl << endl;

    cout << "Program execution complete. Memory has been deallocated." 
         << endl << endl;

    system("pause");
}

/* 
INITIAL STATE TEST :
Phone List Title : Middle - earth
Name                Area Code Phone Number

Total number of directories : 0

Total number of directories : 0

ADDING NODES TEST :
Legolas was added to the directory successfully.
Number of directories : 1

Gimli was added to the directory successfully.
Number of directories : 2

Gandalf was added to the directory successfully.
Number of directories : 3

Aragorn was added to the directory successfully.
Number of directories : 4

Phone List Title : Middle - earth
Name                Area Code Phone Number
Aragorn             111       2223333
Gandalf             789       9876543
Gimli               456       1234567
Legolas             123       4567890

Total number of directories : 4

ADDING DUPLICATE NODES TEST :
Directory with name Legolas already exists, not added.

Phone List Title : Middle - earth
Name                Area Code Phone Number
Aragorn             111       2223333
Gandalf             789       9876543
Gimli               456       1234567
Legolas             123       4567890

Total number of directories : 4

REMOVING NODES TEST :
Aragorn was successfully removed from the directory.
Number of directories : 3

Gandalf was successfully removed from the directory.
Number of directories : 2

Legolas was successfully removed from the directory.
Number of directories : 1

Phone List Title : Middle - earth
Name                Area Code Phone Number
Gimli               456       1234567

Total number of directories : 1

REMOVING NON - EXISTANT NODES TEST :
Directory with name Frodo not found.Cannot remove.

Phone List Title : Middle - earth
Name                Area Code Phone Number
Gimli               456       1234567

Total number of directories : 1

REMOVING FROM EMPTY LIST TEST :
Gimli was successfully removed from the directory.
Number of directories : 0

The directory is empty.Cannot remove Samwise.

CALLING FUNCTIONS TEST :
Phone List Title : Middle - earth
Number of Directories : 0

Program execution complete.Memory has been deallocated.

Press any key to continue . . .
*/