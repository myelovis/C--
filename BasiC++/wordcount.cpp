#include <iostream>

int main() {
    int chcount = 0; // counts non-space characters
    int wdcount = 1; // counts spaces between words
    char ch;

    std::cout << "Enter a phrase: ";
    while (ch != '\n') // loop until Enter (newline) is typed
    {
        ch = std::cin.get(); // read one character
        if (ch == ' ') // if it's a space
            wdcount++; // count a word
        else if (ch != '\n') // ignore newlines
            chcount++; // count a character
    }

    // display results
    std::cout << "Words=" << wdcount << std::endl
              << "Letters=" << chcount << std::endl;

    return 0;
}
