#include <iostream>

using namespace std;

const int ASCII_VALUES = 256;

int main() {
    string input;
    cin >> input;
    int charCount[ASCII_VALUES] = {0};
    for (auto i : input) {
        charCount[i]++;
    }
    for (int i=0; i<ASCII_VALUES; i++) {
        if (charCount[i] == 1) {
            cout << (char)i;
        } else if (charCount[i] > 1) {
            cout << (char)i;
            cout << charCount[i];
        }
    }

}