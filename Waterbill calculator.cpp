#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    float bill = 0;

    // Prompt user for input
    cout << "Enter water units consumed: ";
    cin >> units;

    // Calculate bill based on consumption rules
    if (units >= 0 && units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else if (units > 60) {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    } else {
        cout << "Invalid input. Units cannot be negative." << endl;
        return 1;
    }

    // Display the total bill with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Total water bill: " << bill << " KES" << endl;

    return 0;
}