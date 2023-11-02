#include <iostream>
using namespace std;

int main() {
    int choice, days = 0;

    cout << "1. Do you want to borrow a book" << endl;
    cout << "2. Do you want to return a book" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Thank you for borrowing a book." << endl;
        cout << "Return it within 21 days or you will be fined $1 for each day above the limit." << endl;
        break;

    case 2:
        cout << "You chose to return a book." << endl;
        cout << "Enter the number of days you have taken the book: ";
        cin >> days;

        if (days > 21) {
            int fine = (days - 21) * 1;
            cout << "Your fine is: $" << fine << endl;
        }
        else {
            cout << "Thank you for returning the book on time." << endl;
        }
        break;

    default:
        cout << "Such option doesn't exist." << endl;
    }

    return 0;
}

