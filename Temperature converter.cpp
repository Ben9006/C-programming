#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    
    cout << " TEMPERATURE CONVERTER " << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    // Set decimal precision to 2
    cout << fixed << setprecision(2);
    
    // Call the function and display result
    float celsius = convertToCelsius(fahrenheit);
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    
    return 0;
}