//linear searching in string if element is found return its index
#include <iostream>
using namespace std;    
int linearSearch(string str, char target) {
    if (target < 'a' || target > 'z') {
        return -1; // Return -1 if the key is not a lowercase letter
    }

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == target) {
            cout << "Element found at index: " << i << endl; // Print the index of the found element
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}
int main() {
    string str = "hello world"; // Declare a string to hold the elements
    char target = 'o'; // Declare a variable to hold the target character
    int index = linearSearch(str, target); // Call the linear search function
    if (index == -1) {
        cout << "Element not found" << endl; // Print if the element is not found
    } else {
        cout << "Element found at index: " << index << endl; // Print the index of the found element
    }
    return 0; // Return 0 to indicate successful execution
}