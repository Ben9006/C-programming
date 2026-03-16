#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate electric bill
float calculateElectricBill(int units) {
    float bill = 0;

    if(units <= 100) {
        bill = units * 10;
    } else if(units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    
    cout << " ELECTRIC BILL CALCULATOR " << endl;
    cout << "Enter electricity units consumed: ";
    cin >> units;
    
    // Set decimal precision to 2
    cout << fixed << setprecision(2);
    
    // Call the function and display result
    float bill = calculateElectricBill(units);
    cout << "Total Electric Bill: KSh " << bill << endl;
    
    return 0;
}