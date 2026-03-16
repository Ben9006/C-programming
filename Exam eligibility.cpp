#include <iostream>
using namespace std;

int main() {
    float attendance, average_marks;

    // Get user input
    cout << "Enter student's attendance percentage: ";
    cin >> attendance;
    cout << "Enter student's average marks: ";
    cin >> average_marks;

    // Check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        cout << "The student is eligible for final exams." << endl;
    } else {
        cout << "Not eligible." << endl;
    }

    return 0;
}