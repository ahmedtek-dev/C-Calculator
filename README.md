# Simple C Calculator

## Description
A basic command-line calculator written in C using CS50 library.  
It supports:
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)

---

## How it works
The program:
1. Takes two integer inputs from the user
2. Asks for an operation symbol
3. Calls the corresponding function
4. Prints the result

---

## Functions
- `add(a, b)` → returns sum  
- `subtract(a, b)` → returns difference  
- `multiply(a, b)` → returns product  
- `divide(a, b)` → returns floating-point division (with zero-check)

---

## New features
- Added a infinite loop for run the calculator forever
- The user can now stop the calculator loop
- Calculations are now more accurate after the addition of decimal numbers
- Add comments in the main code

## Compile & Run

```bash
clang calc.c -o calc -lcs50
./calc 
