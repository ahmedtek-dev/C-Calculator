# Run the code in termux

## Steps
To run the calculator on termux use these steps:
1. Install these tools using these commands

   ```bash
   pkg update && pkg upgrade -y
   pkg install git clang make -y
   ```

2. After install the tools now install the `cs50.h` library using these commands

   ```bash
   git clone https://github.com/cs50/libcs50.git #clone library files
   cd libcs50 #enter to the library folder
   make install #install libary
   ```

3. Now download the calculator files using this commands

   ```bash
   git clone https://github.com/ahmedtek-dev/C-Calculator.git #clone calculator files
   cd C-Calculator/src #enter to the project files
   clang calc.c -lcs50 -o calc && ./calc #compile and run the code
   ```
