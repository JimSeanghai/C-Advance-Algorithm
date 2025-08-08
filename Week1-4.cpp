#include <iostream>
using namespace std;

int main() {
    int studentScore = 85;

    string StudentRecord = "Passed";

    double student_score = 92.5;

    const int MAX_BUFFER_SIZE = 1024;

    cout << "camelCase - studentScore: " << studentScore << endl;
    cout << "PascalCase - StudentRecord: " << StudentRecord << endl;
    cout << "snake_case - student_score: " << student_score << endl;
    cout << "SCREAMING_SNAKE_CASE - MAX_BUFFER_SIZE: " << MAX_BUFFER_SIZE << endl;

    return 0;
}
