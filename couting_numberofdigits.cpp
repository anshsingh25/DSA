#include <iostream>
using namespace std;

int countEvenDigitNumbers(int arr[], int size) {
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        int temp = abs(arr[i]);  // Ignore sign
        int digitCount = 0;
        
            while(temp > 0) {
                temp /= 10;
                digitCount++;
            }

        if (digitCount % 2 == 0) {
            cout << arr[i] << " has " << digitCount << " digits (even)" << endl;
            count++;
        } else {
            cout << arr[i] << " has " << digitCount << " digits (odd)" << endl;
        }
    }

    return count;
}

int main() {
    int arr[] = {10, -5, 22, 9, -6, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenDigitNumbers = countEvenDigitNumbers(arr, size);

    cout << "Total numbers with even digit count: " << evenDigitNumbers << endl;

    return 0;
}
