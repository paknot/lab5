#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data;
    int input;
    int sum = 0;
    int count = 0;

    while (true) {
        cout << "Enter a number (or -1 to stop): ";
        cin >> input;

        if (input == -1) {
            break;
        }

        sum += input; 
        count++;      
    }

    if (count == 0) {
        cout << "No numbers entered." << endl;
    } else {
        int average = sum / count;
        cout << "The average is: " << average << endl;
    }

    return 0;
}
