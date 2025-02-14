# COMP-333: Object-Oriented Programming using C++

## Project Overview
This repository contains **Assignment 3** for Object-Oriented Programming (COMP 333) at St. Lawrence College. The project implements a **linked list-based phone directory** using C++, demonstrating dynamic memory allocation, object-oriented programming (OOP) principles, and best practices for data management.

## Learning Objectives
This project applies:
- **Object-Oriented Programming (OOP)**: Encapsulation, classes, and objects.
- **Linked List Data Structures**: Dynamic memory allocation and pointer manipulation.
- **Memory Management & Destructors**: Ensuring proper deallocation of memory to prevent leaks.
- **Operator Overloading & Function Implementation**: Custom functions for managing data.
- **Best Practices in C++ Programming**: Code organization, header files, and modularity.

## Project Features
- **Phone Directory Implementation**: Allows adding, removing, and displaying phone records.
- **Alphabetical Ordering**: Ensures entries remain sorted dynamically.
- **Error Handling for Duplicate Entries**: Prevents duplicate names from being added.
- **Dynamic Memory Allocation**: Nodes are allocated and deallocated to optimize performance.

## Repository Structure
```
COMP-333-PhoneList/
│── README.md                  # Project Overview
│── assignment3.sln              # Visual Studio Solution File
│── ClientCode.cpp               # Main driver file
│── Phonelist.cpp                # Implementation of PhoneList class
│── Phonelist.h                  # Header file containing class definitions
│── assignment3.vcxproj          # Project configuration file
│── assignment3.vcxproj.filters  # Filters for Visual Studio project 
```

## How to Compile & Run
### **1. Open the Project in Visual Studio**
- Load the solution file **`assignment3.sln`** in **Microsoft Visual Studio**.

### **2. Build the Project**
- Navigate to **Build > Build Solution (Ctrl + Shift + B)**.
- Ensure there are no compilation errors.

### **3. Run the Program**
- Press **F5** to execute the program.

## Future Improvements
- Implement **search functionality** to find entries faster.
- Add **file-based persistence** to save phone lists.
- Implement **a GUI interface** for better usability.

## Author
Taylor Evans | Contact: **taylor.evans@student.sl.on.ca**
