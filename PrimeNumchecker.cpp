#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is prime
bool Pchecker(int number) {
    if (number <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // If the number is divisible by any number from 2 up to its square root, it's not prime
        }
    }

    return true; // If the number has passed the above checks, it is prime
}

int main() {
    int i, a, b, choice;
    cout << "1. Do you want to give a range to print numbers?\n"; //Asking user for their choice
    cout << "2. Do you want to check if a number is prime?\n";
    cout << "Choose 1 or 2\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        cout << "Enter the range.\n"; // Asking user for range
        cout << "Enter the first number of the range: ";
        cin >> a;
        cout << "Enter the second number of the range: ";
        cin >> b;
        cout << "Prime numbers within the range: ";
        for (i = a; i < b; ++i) {
            if (Pchecker(i) == true) {
                cout << " " << i; // Displaying prime numbers within the given range
            }
        }
        break;
    }
    case 2: {
        int num;
        cout << "You chose to check if your number is prime or not.\n";
        cout << "Enter your number: ";
        cin >> num;
        if (Pchecker(num) == true) {
            cout << "Entered Number is Prime"; // Display result for prime number check
        }
        else {
            cout << "Entered Number is not prime"; // Display result for non-prime number check
        }
        break;
    }
    default:
        cout << "Entered choice doesn't exist"; // Handling invalid choices
    }
}
