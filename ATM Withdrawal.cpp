#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float balance;
    float withdrawal;

    // Initialize account balance
    cout << "Enter your initial account balance (KES): ";
    cin >> balance;

    cout << fixed << setprecision(2);

    // Continue withdrawal while balance is positive
    while(balance > 0) {
        cout << "\nCurrent balance: KES " << balance << endl;
        cout << "Enter amount to withdraw (KES): ";
        cin >> withdrawal;

        // Check if withdrawal is valid
        if(withdrawal <= 0) {
            cout << "Invalid amount. Please enter a positive value." << endl;
            continue;
        }

        if(withdrawal > balance) {
            cout << "Insufficient funds! Cannot withdraw more than current balance." << endl;
        } else {
            balance -= withdrawal;
            cout << "Withdrawal successful. New balance: KES " << balance << endl;
        }
    }

    cout << "\nYour balance is now zero or negative. No further withdrawals allowed." << endl;
    return 0;
}