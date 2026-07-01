# Run the code in Arch linux

## Steps
To use the calculator in arch linux do these steps:
1. Install these tools from the terminal

   ```bash
   sudo pacman -Syu
   ```

- if the system required to restart do this command after that:

    ```bash
    sudo pacman -Sy git gcc make
    ```

2. After install the tools now install the `cs50.h` libary using these commands

   ```bash
   git clone https://github.com/cs50/libcs50.git #clone library files
   cd libcs50 #enter to the library folder
   sudo make install #install library
   ```

3. Now download the calculator files uding these commands

   ```bash
   git clone https://github.com/ahmedtek-dev/C-Calculator.git #clone calculator files
   cd C-Calculator/src #enter to the project files
   gcc calc.c -lcs50 -o calc && ./calc #compile and run the code
   ```

