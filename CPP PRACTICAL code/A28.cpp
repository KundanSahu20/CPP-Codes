#include <iostream>

class DegreeCelsius {
private:
    double temperatureC; // Temperature in degree Celsius

public:
    // Constructor
    DegreeCelsius(double tempC = 0.0) : temperatureC(tempC) {}

    // Prefix increment operator (++celsius)
    DegreeCelsius& operator++() {
        ++temperatureC;
        return *this;
    }

    // Postfix increment operator (celsius++)
    DegreeCelsius operator++(int) {
        DegreeCelsius temp(*this);
        ++temperatureC;
        return temp;
    }

    // Prefix decrement operator (--celsius)
    DegreeCelsius& operator--() {
        --temperatureC;
        return *this;
    }

    // Postfix decrement operator (celsius--)
    DegreeCelsius operator--(int) {
        DegreeCelsius temp(*this);
        --temperatureC;
        return temp;
    }

    // Insertion operator (for displaying value)
    friend std::ostream& operator<<(std::ostream& os, const DegreeCelsius& celsius) {
        os << celsius.temperatureC << "°C";
        return os;
    }

    // Extraction operator (for input)
    friend std::istream& operator>>(std::istream& is, DegreeCelsius& celsius) {
        is >> celsius.temperatureC;
        return is;
    }
};

int main() {
    DegreeCelsius celsiusObj(25.0);

    // Increment and display
    std::cout << "Initial temperature: " << celsiusObj << std::endl;
    celsiusObj++;
    std::cout << "After increment (postfix): " << celsiusObj << std::endl;
    ++celsiusObj;
    std::cout << "After increment (prefix): " << celsiusObj << std::endl;

    // Decrement and display
    celsiusObj--;
    std::cout << "After decrement (postfix): " << celsiusObj << std::endl;
    --celsiusObj;
    std::cout << "After decrement (prefix): " << celsiusObj << std::endl;

    // Input from user
    std::cout << "Enter a new temperature in Celsius: ";
    std::cin >> celsiusObj;
    std::cout << "Updated temperature: " << celsiusObj << std::endl;

    return 0;
}
