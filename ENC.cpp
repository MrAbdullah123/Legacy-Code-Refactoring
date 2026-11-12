#include <stdio.h>

#define ENCRYPTION_KEY 70

/*
 Project: File Encryption Program
 Purpose: Encrypts text from Plain.txt.
 Input: Plain.txt
 Output: Cipher.txt
 Encryption: Adds 70 to each character.
 Decryption: Subtracts 70 from each character.
*/

// Function to encrypt the file
void encryptFile(FILE *inputFile, FILE *outputFile)
{
    int character;

    while ((character = fgetc(inputFile)) != EOF)
    {
        character = character + ENCRYPTION_KEY;
        fputc(character, outputFile);
    }
}

int main()
{
    FILE *inputFile, *outputFile;

    inputFile = fopen("Plain.txt", "r");

    if (inputFile == NULL)
    {
        printf("Unable to open input file");
        return 1;
    }

    outputFile = fopen("Cipher.txt", "w");

    if (outputFile == NULL)
    {
        printf("Unable to open output file");
        fclose(inputFile);
        return 1;
    }

    encryptFile(inputFile, outputFile);

    fclose(inputFile);
    fclose(outputFile);

    printf("File encrypted successfully!");

    return 0;
}