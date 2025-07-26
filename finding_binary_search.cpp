//finding the ceiling of an element in a sorted array using binary search
#include <iostream>
using namespace std;    
int ceilingNumber(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1; // Initialize result to -1

    while (start <= end) {
        int mid = start + (end - start) / 2; // To avoid overflow

        if (arr[mid] == target) {
            result = arr[mid];
            return arr[mid]; // Return the element itself if it matches the target
        } else if (arr[mid] < target) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }   
    }
    return arr[start]; // Return the ceiling value or -1 if not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5; // Example target value
    int result = ceilingNumber(arr, size, target);
    
    if (result != -1) {
        cout << "Ceiling of " << target << " is: " << result << endl; // Print the ceiling value
    } else {                
        cout << "No ceiling found for the target in the array." << endl; // Print not found message
    }
    return 0; // Return 0 to indicate successful execution
}   