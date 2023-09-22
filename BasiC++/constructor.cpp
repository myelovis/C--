/*The construcor is a special member function, which is called automatically
when an object is first created*/

#include <iostream> // for console output
#include <string>   // for color representation

// Define color structure as an RGB string
struct color {
    std::string value;

    // Constructor for setting color
    color(const std::string& v) : value(v) {}
};

// Define fillstyle enumeration
enum fstyle {
    SOLID_FILL,
    X_FILL,
    O_FILL
};

class circle {
protected:
    int xCo, yCo;   // coordinates of center
    int radius;
    color fillcolor; // color
    fstyle fillstyle; // fill pattern

public:
    // Constructor
    circle(int x, int y, int r, const color& fc, fstyle fs) :
        xCo(x), yCo(y), radius(r), fillcolor(fc), fillstyle(fs) {}

    void draw() {
        std::cout << "Drawing a circle with center at (" << xCo << ", " << yCo << "), radius " << radius
                  << ", fill color " << fillcolor.value << ", fill style " << fillstyle << std::endl;
    }
};

int main() {
    color red("red");
    circle myCircle(50, 50, 20, red, SOLID_FILL);
    myCircle.draw();
    return 0;
}
