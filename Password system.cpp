#include <iostream>
using namespace std;

int main() {
    int password;
    const int correct_password = 1234;

    // Use do-while to ensure the prompt is shown at least once
    do {
        cout << "Enter password: ";
        cin >> password;

        if(password != correct_password) {
            cout << "Incorrect password. Try again." << endl;
        }
    } while(password != correct_password);

    cout << "Access Granted" << endl;

    return 0;
}