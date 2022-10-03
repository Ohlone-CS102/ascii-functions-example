#include <iostream>

int getAsciiNumber();
char convertNumberToCharacter(int number);
void outputResult(int number, char character);

using namespace std;
int main() {
    int asciiNumber;
    char asciiCharacter;
    asciiNumber = getAsciiNumber();
    asciiCharacter = convertNumberToCharacter(asciiNumber);
    outputResult(asciiNumber, asciiCharacter);

    cout << "All Done." << endl;
    return 0;
}

/**
 * Asks the user for a number and returns it.
 * @return the number inputted
 */
int getAsciiNumber(){
    int input_number;
    cout << "Enter an ascii number:";
    cin >> input_number;
    return input_number;
}

/**
 * Takes a number and returns the corresponding
 * ascii character
 * @param number ascii code
 * @see https://en.cppreference.com/w/cpp/language/ascii
 * @return ascii character
 */
char convertNumberToCharacter(int number) {
    char character = number;
    return character;
}

/**
 * Displays the number and resulting character to the user
 * @param number the number entered
 * @param character the result character
 */
void outputResult(int number, char character) {
    cout << "The number " << number << " translates to '" << character << "'." << endl;
}