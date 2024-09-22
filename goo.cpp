#include <iostream>
using namespace std;

int main() {
    const int LENGTH = 21; 
    char message[LENGTH];  
    int i;

    cout << "Enter a sentence on the line below." << endl;

    cin.get(message[0]);
    i = 1; 

    while (i < LENGTH - 1) {
        cin.get(message[i]);
        
        if (message[i] == '\n') {
            break; 
        }
        ++i; 
    }

    message[i] = '\0'; 

    cout << message << endl;

    return 0;
}


