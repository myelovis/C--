#include <iostream>
using namespace std;

int main() {
    const char WHITE = 219; // solid color (primes)
    const char GRAY = 176;  // gray (non primes)
    char ch;

    // For each screen position
    for (int count = 0; count < 80 * 25 - 1; count++) {
        ch = WHITE; // Assume it's prime

        // Display the character using cout
        cout << ch;

        // Simulate a line break every 80 characters (similar to the console width)
        if ((count + 1) % 80 == 0) {
            cout << '\n';
        }
    }

    return 0;
}
