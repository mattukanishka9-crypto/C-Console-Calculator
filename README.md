🧮 C++ Calculator Project

A clean, OOP-based command-line calculator in C++ with basic and advanced operations. Built using class, header files, and <cmath> library.

✨ Features

Addition, Subtraction, Multiplication, Division (with zero check)
Modulus, Power, Square Root (with negative number protection)
Menu-driven interface
Proper error messages
Fully separated header + implementation
📁 Project Structure

-calculator.cpp -calculator.exe -calculator.h -main.cpp

📥 Source Files

📥 calculator.h – Header file with class declaration, private variables, public function prototypes, and header guards.
📥 calculator.cpp – Implementation file containing all member functions (setValues, addition, subtraction, multiplication, division, modulus, power, squareroot) with logic and error handling.
📥 main.cpp – Main program file with user input, menu display, switch-case logic, and object creation.
🛠️ How to Compile & Run

(Works on VS Code, Visual Studio, MinGW, Linux, macOS)

g++ calculator.cpp main.cpp -o calculator
./calculator

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

🔧 Technologies Used

C++11
<iostream> & <cmath>
Object-Oriented Programming


Made with ❤️ for learning C++
Feel free to fork or use it as a base for your projects!
