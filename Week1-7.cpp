#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The first 10 multiples of " << num << " are: ";

    for (int i = 1; i <= 10; i++) {
        cout << num * i;
        if (i != 10) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
