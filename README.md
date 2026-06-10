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

## Compile & Run

```bash
clang calculator.c -o calculator -lcs50
./calculator
Note : For run and compile the code you're need `<cs50.h>` header file.  
