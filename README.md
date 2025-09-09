# Implementation Explanation Document

- Full Name: sandiel Carmona Jr.

- Course Name: CSCL 373 - Advanced Data Structures

- Course Description: This course explores advanced data structures and 
C++ programming, emphasizing object-oriented programming, arrays, pointers, 
and operator overloading.

- Assignment Title: Integer Calculator with Operator Overloading (Without User Input)

- Date: [09/07/2025]

## 1. Introduction

This assignment tasked me with creating a simple integer calculator in C++ using a custom Integer class. The program performs addition, subtraction, multiplication, and division between Integer objects. The goal was to practice operator overloading, object-oriented programming, and automated testing using randomly generated intergers without user input. the program is structured into three files: integer.h, Integer.cpp, and main.cpp

## 2. Tools and Technologies Used

- Tool 1: C++ using CodeLabZone (IDE)


## 3. Implementation Details
### Key Components
- Classes: 
      Integer: Encapsulates an integer value and overloads the arithmetic
      operators (+, -, *, /) to allow operations between Integer objects
- Functions: 
     Integer(): Default constructor initializing the value to 0.
     Integer (int val): Parameterized constructor to set a specific value.
     getValue(): Return the integer value.
     setValue(int val): Sets the integer value.
     operator+(), operator-(), operator*(), operator/(): Overloaded operators
     performing arithmetic operations between Integer objects.

### Design Choices
- Arithmetic operations are encapsulated within the Integer class for modularity
and reusability.

- Division operator checks for zero to prevent runtime errors.

- the main program uses a loop with random number generation to simulate multiple
calculator operations automatically.

## 4. Challenges, Solutions, and Error Report
### Technical Challenges

- Challenge 1: Ensuring division is performed safely.
  - Solution: added a check in main.cpp and operator/() to prevent division by
  zero.

- Challenge 2: Automating testing for multiple operations without user input.
  - Solution: used a for loop with randomly generated integers and random
    operation selection to perform 10 calculations automatically.

### Error Report
- Common Errors Encountered:
  - Error 1: typos in method names (using setvalue rather than setValue)
    - Cause: Case sensitivity in C++ caused compilation errors.
    - Solution: Corrected method name to setVale consistently.

## 5. Testing Strategy
### Verification Methods
Test Case 1: Checked addition using random integers.
        Example: Integer(3) + Integer(4) returned 7.
Test Case 2: Checked subtraction using random integers.
        Example: Integer(5) - Integer(8) returned -3.
Test Case 3: checked multiplication using random integers.
        Example: Integer(3) * Integer(6) returned 18.
Test Case 4: Checked division using random integers
        Example: Integer(6) / integer(3) returned 2.

## 6. Conclusion
This assignment reinforced my understanding of operators overloading and object-oriented programming in C++. Creating the Integer class allowed me to encapsulate arithmetic operations cleanly. Automated testing with random numbers improved my skills in designing programs that can validate themselves without user input. Handling division by zero highlighted the importance of error checking, even in simple programs

## 7. References
none used

-------------------------------------------------------------------------------
