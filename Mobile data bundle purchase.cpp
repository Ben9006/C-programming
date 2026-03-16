#include <iostream>
using namespace std;

int main() {
    int choice;

    // Display the menu
    cout << "Select data bundle:" << endl;
    cout << "1. 100MB @ 50 KES" << endl;
    cout << "2. 500MB @ 200 KES" << endl;
    cout << "3. 1GB @ 350 KES" << endl;
    cout << "4. 2GB @ 600 KES" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Process the choice using a switch statement
    switch(choice) {
        case 1:
            cout << "You selected 100MB. Cost = 50 KES" << endl;
            break;
        case 2:
            cout << "You selected 500MB. Cost = 200 KES" << endl;
            break;
        case 3:
            cout << "You selected 1GB. Cost = 350 KES" << endl;
            break;
        case 4:
            cout << "You selected 2GB. Cost = 600 KES" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}