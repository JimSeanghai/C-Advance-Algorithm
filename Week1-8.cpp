#include <iostream>
using namespace std;

int main() {
    int opt;

    do {
        cout << "1. Greet \n";
        cout << "2. Calculate factorial \n";
        cout << "0. Exit \n";
        
        cout << "Enter your Option: ";
        cin >> opt;

        switch (opt) {
        case 1: {
            string name;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Hey! Greeting " << name << endl;
            break;
        }
        case 2: {
            int num, fac = 1;
            cout << "Input Number: ";
            cin >> num;
            for (int i = 1; i <= num; i++) {
                cout << i;
                if (i != num) {
                    cout << "*";
                }
                fac *= i;
            }
            cout << " = " << fac << endl;
            break;
        }
        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid Option! Please Try Again.\n";
            break;
        }
    } while (opt != 0);

    return 0;
}
