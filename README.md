# Legacy Code Refactoring

## Project Overview
This project demonstrates the process of identifying and improving legacy C code through small-step refactoring.

The program reads text from `Plain.txt`, encrypts each character using a character-shifting technique, and saves the encrypted output in `Cipher.txt`.

## Objectives
- Identify legacy code issues.
- Replace magic numbers with constants.
- Improve variable names.
- Add file-handling error checks.
- Separate logic into functions.
- Improve code readability and maintainability.
- Add documentation and comments.

## Technologies Used
- Programming Language: C
- Compiler: GCC
- IDE: Visual Studio Code
- Version Control: Git and GitHub

## Files
- `main.c`: Main C program containing encryption logic.
- `Plain.txt`: Input text file.
- `Cipher.txt`: Generated encrypted output file.

## Encryption Method
The program adds an encryption key of 70 to each character.

To reverse the operation, subtract 70 from each encrypted character.

**Note:** This is a basic educational encryption technique, not secure cryptography.

## How to Run

Compile:

```bash
gcc main.c -o encryption
```

Run on Windows:

```bash
.\encryption.exe
```

Make sure `Plain.txt` is in the same directory as the executable.

## Learning Outcomes
This project demonstrates legacy code analysis, refactoring, documentation, file handling, and basic GitHub version control.