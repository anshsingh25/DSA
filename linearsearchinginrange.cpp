//linear searching using range 
#include <iostream>
using namespace std;    
int linearSearchInRange(int arr[], int size, int target, int start, int end) {
    if (start < 0 || end >= size || start > end) {
        return -1; // Return -1 if the range is invalid
    }

    for (int i = start; i <= end; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl; // Print the index of the found element
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}
int main() {
    int arr[] = {10, -5, 22, 9, -6, 66}; // Declare an array to hold the elements
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 9; // Declare a variable to hold the target element
    int start = 1; // Declare a variable to hold the start index of the range
    int end = 4; // Declare

    int index = linearSearchInRange(arr, size, target, start, end); // Call the linear search function
    if (index == -1) {
        cout << "Element not found in the specified range" << endl; // Print if the element is not found
    } else {
        cout << "Element found at index: " << index << endl; // Print the index of the found element
    }
    return 0; // Return 0 to indicate successful execution
}