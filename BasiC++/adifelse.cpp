#include <iostream>
using namespace std;

int main() {
    char dir = 'a';
    int x = 10, y = 10;
    cout << "Type Enter to quit\n";
    
    while (dir != '\r') { // Until Enter is typed
        cout << "\nYour location is " << x << ", " << y;
        cout << "\nPress direction key (n, s, e, w): ";

        // Read a character for direction
        dir = cin.get();

        switch (dir) {
            case 'n':
                y--;
                break;
            case 's':
                y++;
                break;
            case 'e':
                x++;
                break;
            case 'w':
                x--;
                break;
            case '\r':
                break; // Exit if Enter is pressed
            default:
                cout << "Invalid direction. Try again." << endl;
        }
    }

    cout << "Goodbye!\n";
    return 0;
}
