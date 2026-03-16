#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate fare
float calculateFare(float distance) {
    return distance * 50; // KSh 50 per km
}

int main() {
    float distance;
    
    cout << " FARE CALCULATOR " << endl;
    cout << "Enter distance traveled (in kilometers): ";
    cin >> distance;
    
    // Set decimal precision to 2
    cout << fixed << setprecision(2);
    
    // Call the function and display result
    float fare = calculateFare(distance);
    cout << "Total Fare: KSh " << fare << endl;
    
    return 0;
}