#include <iostream>
using namespace std;

const int LENGTH = 21;

int main() {
    char message[LENGTH];

    cout << "Enter a sentence on the line below." << endl;

    // Read the first word only
    cin >> message;

    // Output the first word
    cout << message << endl;

    return 0;
}
