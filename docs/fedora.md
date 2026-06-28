# Run the code in fedora

## Steps
To use the calculator in fedora linux do these steps:
1. Install these tools from the terminal

   ```bash
   sudo dnf update && sudo dnf upgrade -y
   sudo dnf install git gcc make  -y
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
