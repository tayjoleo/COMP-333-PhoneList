#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// COMP 333 - Assignment 3
// Taylor Evans - 4373570
// Manages a phone list. It allows adding and removing directories 
// containing names, area codes, and phone numbers. The program organizes 
// entries alphabetically and displays the list with formatting.

struct Directory {
    string name;
    int areaCode;
    int phoneNo;
    Directory* link;
};

class PhoneList {
    private:
        Directory* firstPtr;
        string title;
        int numDirectories;

    public:
        PhoneList(const string& listTitle);
        ~PhoneList();
        void showList(ostream& out) const;
        void addDirectory(const string& name, int areaCode, int phoneNo);
        void removeDirectory(const string& name);
        int getNoDirectories() const { return numDirectories; } 
        string getTitle() const { return title; }
};

class Subscription {
    private:
        string title;

    public:
        Subscription(const string& subTitle) : title(subTitle) {}
        string getTitle() const { return title; }
};