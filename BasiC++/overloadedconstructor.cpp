/*Since there are two explicit constructors with the same name, Distance(), we say the
constructor is overloaded. */

#include <iostream>
using namespace std;

#include <iostream> // You need to include this to use cout and cin

class Distance // English Distance class
{
private:
    int feet;
    float inches;

public:
    // Constructor (no args)
    Distance() : feet(0), inches(0.0) { }

    // Constructor (two args)
    Distance(int ft, float in) : feet(ft), inches(in) { }

    void getdist() // Get length from user
    {
        std::cout << "Enter feet: "; 
        std::cin >> feet;
        std::cout << "Enter inches: "; 
        std::cin >> inches;
    }

    void showdist() // Display distance
    { 
        std::cout << feet << "\'-" << inches << '\"'; 
    }

    void add_dist(const Distance& d2, const Distance& d3) // Corrected the declaration and added 'const'
    {
        inches = d2.inches + d3.inches; // Add the inches
        feet = 0; // Initialize feet to 0 (for possible carry)
        
        if (inches >= 12.0) // If total exceeds 12.0,
        {
            inches -= 12.0; // Decrease inches by 12.0
            feet++; // Increase feet by 1
        }
        
        feet += d2.feet + d3.feet; // Add the feet
    }
};

int main()
{
    Distance dist1, dist3; // Define two lengths
    Distance dist2(11, 6.25); // Define and initialize dist2
    dist1.getdist(); // Get dist1 from user
    dist3.add_dist(dist1, dist2); // dist3 = dist1 + dist2
    
    // Display all lengths
    std::cout << "dist1 = "; 
    dist1.showdist();
    std::cout << "\ndist2 = "; 
    dist2.showdist();
    std::cout << "\ndist3 = "; 
    dist3.showdist();
    std::cout << std::endl;
    
    return 0;
}
