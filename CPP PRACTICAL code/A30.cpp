#include <iostream>
#include<conio.h>
using namespace std;

class Celsius; 
class Fahrenheit {
private:
    double temperatureF;
public:

    Fahrenheit(double temp) : temperatureF(temp) {}

    double getTemperatureF() const {
        return temperatureF;
    }

    void assignCelsius(const Celsius& celsiusObj);

    int compareTemperature(const Celsius& celsiusObj) const;
};

class Celsius {
private:
    double temperatureC;

public:

    Celsius(double temp) : temperatureC(temp) {}

    double getTemperatureC() const {
        return temperatureC;
    }

    void assignFahrenheit(const Fahrenheit& fahrenheitObj);

    friend int Fahrenheit::compareTemperature(const Celsius& celsiusObj) const;
};

void Fahrenheit::assignCelsius(const Celsius& celsiusObj) 
{
    // Convert Celsius to Fahrenheit: (C * 9/5) + 32
    temperatureF = (celsiusObj.getTemperatureC() * 9.0 / 5.0) + 32.0;
}

// Function to assign Fahrenheit object to Celsius object
void Celsius::assignFahrenheit(const Fahrenheit& fahrenheitObj) 
{
    // Convert Fahrenheit to Celsius: (F - 32) * 5/9
    temperatureC = (fahrenheitObj.getTemperatureF() - 32.0) * 5.0 / 9.0;
}

// Function to compare Fahrenheit and Celsius objects
int Fahrenheit::compareTemperature(const Celsius& celsiusObj) const 
{
    if (temperatureF > celsiusObj.getTemperatureC()) {
        return 1;  // Fahrenheit is higher
    } else if (temperatureF < celsiusObj.getTemperatureC()) {
        return -1; // Celsius is higher
    } else {
        return 0;  // Both are equal
    }
}

int main() {
    // Create objects of Fahrenheit and Celsius classes
    Fahrenheit fahrenheitObj(98.6);
    Celsius celsiusObj(37.0);

    // Assign Celsius object to Fahrenheit object
    fahrenheitObj.assignCelsius(celsiusObj);
    std::cout << "Temperature in Fahrenheit: " << fahrenheitObj.getTemperatureF() << " F" << std::endl;

    // Assign Fahrenheit object to Celsius object
    celsiusObj.assignFahrenheit(fahrenheitObj);
    std::cout << "Temperature in Celsius: " << celsiusObj.getTemperatureC() << " C" << std::endl;

    // Compare Fahrenheit and Celsius objects
    int comparisonResult = fahrenheitObj.compareTemperature(celsiusObj);
    if (comparisonResult > 0) {
        std::cout << "Fahrenheit has a higher temperature." << std::endl;
    } else if (comparisonResult < 0) {
        std::cout << "Celsius has a higher temperature." << std::endl;
    } else {
        std::cout << "Both have the same temperature." << std::endl;
    }

    return 0;
}
