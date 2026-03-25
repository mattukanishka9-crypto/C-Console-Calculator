🧮 C++ Calculator

A modular, object-oriented command-line calculator implemented in C++. This project demonstrates clean code structure, separation of concerns, and robust handling of both basic and advanced arithmetic operations.

📌 OVERVIEW

The C++ Calculator is designed to showcase core programming principles such as:
Object-Oriented Programming (OOP)
Modular design using header and implementation files
Input validation and error handling
Structured, menu-driven user interaction
It is ideal for beginners learning C++ as well as for demonstrating foundational software design practices.

✨ FEATURES
Basic arithmetic operations:
Addition
Subtraction
Multiplication
Division (with zero-check protection)
Advanced operations:
Modulus
Exponentiation (Power)
Square Root (with negative input validation)
Clean, menu-driven CLI interface
Clear and user-friendly error messages
Fully separated interface (.h) and implementation (.cpp)

🧱 PROJECT STRUCTURE
Bash
.
├── calculator.h      # Class declaration and function prototypes
├── calculator.cpp    # Function implementations
├── main.cpp          # Program entry point and user interaction
└── calculator.exe    # Compiled executable (optional)

🧩 DESIGN APPROACH

The project follows a class-based design:
A Calculator class encapsulates all operations
Public methods expose functionality
Private members ensure data encapsulation
Logic is separated from user interaction (handled in main.cpp)
This separation improves maintainability, scalability, and readability.

⚙️ BUILD & EXECUTION

Using GNU Compiler (g++)
Bash
g++ calculator.cpp main.cpp -o calculator
./calculator
Supported Environments
Windows (MinGW / Visual Studio)
Linux
macOS
VS Code or any C++ IDE

🖥️ Example Usage

======Console Calculator=====

ENTER FIRST NUMBER : 25
ENTER SECOND NUMBER : 4

1. ADDITION
2. SUBTRACTION
3. MULTIPLICATION
4. DIVISION
5. MODULUS
6. POWER
7. SQUAREROOT

ENTER THE CHOICE : 6

RESULT OF POWER : 390625

Press Enter To Exit.....

🛠️ TECHNOLOGIES

Language: C++ (C++11 standard)
Libraries:
<iostream> for input/output
<cmath> for mathematical operations

📚 KEY CONCEPT DEMONSTREATES

Object-Oriented Programming (Classes & Objects)
File separation (.h and .cpp)
Function abstraction
Control flow using switch-case
Defensive programming and error handling

🚀 FUTURE ENHANCEMENT

Graphical User Interface (GUI) version
Scientific calculator extensions
Persistent calculation history
Unit testing integration
📄 License
This project is open-source and available for educational and personal use.

🤝 CONTRIBUTION

Contributions, suggestions, and improvements are welcome.
Feel free to fork the repository and submit a pull request.
