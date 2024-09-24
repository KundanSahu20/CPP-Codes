#include <iostream>

class Distance {
private:
    int feet;
    float inch;

public:
    Distance() : feet(0), inch(0.0) {} // Default constructor

    void input() {
        std::cout << "Enter distance in feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inch;
    }

    void display() const {
        std::cout << "Distance: " << feet << " feet " << inch << " inches\n";
    }

    // Friend function to add two Distance objects
    friend Distance add(const Distance& d1, const Distance& d2) {
        Distance result;
        result.feet = d1.feet + d2.feet;
        result.inch = d1.inch + d2.inch;
        if (result.inch >= 12.0) {
            result.feet += static_cast<int>(result.inch / 12);
            result.inch = fmod(result.inch, 12.0);
        }
        return result;
    }

    // Friend function to subtract two Distance objects
    friend Distance subtract(const Distance& d1, const Distance& d2) {
        Distance result;
        result.feet = d1.feet - d2.feet;
        result.inch = d1.inch - d2.inch;
        if (result.inch < 0) {
            result.feet -= 1;
            result.inch += 12.0;
        }
        return result;
    }
};

int main() {
    Distance d1, d2;
    std::cout << "Enter details for Distance 1:\n";
    d1.input();

    std::cout << "\nEnter details for Distance 2:\n";
    d2.input();

    Distance sum = add(d1, d2);
    Distance difference = subtract(d1, d2);

    std::cout << "\nSum of distances:\n";
    sum.display();

    std::cout << "\nDifference of distances:\n";
    difference.display();

    return 0;
}
