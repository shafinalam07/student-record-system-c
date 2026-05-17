# Student Record System

## What it does
This is a command-line program I built in C that acts like a persistent digital notebook for student data. It lets you input a student's roll number, name, and marks, and automatically writes that data into a local text file called `student.txt`. 

Because it saves everything to an actual file on your hard drive, your records don't vanish when you close the terminal or turn off your computer.

## Why I built this
I wanted to build a project that moved out of the temporary RAM space and into actual file storage. Working on this project helped me figure out:
1. **Persistent Storage:** How to use basic file handling operations to read and write data permanently.
2. **Data Organization:** Using `struct` to group a string (name), an alphanumeric string (roll number), and a floating-point number (marks) under a single student profile.
3. **Handling Menu Loops:** Keeping a terminal application running smoothly in a continuous loop until the user explicitly decides to quit.

## How it works (In Simple Terms)
- **The Interactive Menu:** Gives you a simple 1, 2, 3 choice workflow directly in the terminal to add new data, view existing records, or exit the program cleanly.
- **Structures (Struct):** Bundles different variables together under one student profile layout so the data doesn't get mismatched.
- **File Handling:** Opens a local text file using C's `FILE` pointer to append records to the end of the file or parse them sequentially to read them back onto the screen.

## How to run it
1. Open your terminal or command prompt inside this project folder.
2. Compile the source file using a standard C compiler:
   gcc records.c -o records

3. Run the compiled executable:
   ./records

## Tech Used
- **Language:** C
- **Compiler:** GCC
- **Core Concepts:** File I/O (`fopen`, `fprintf`, `fscanf`), Custom Structures, and Control Flow

## Author
Shafin Alam
GitHub: [shafinalam07](https://github.com/shafinalam07)
