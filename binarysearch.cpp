//searching any specific element in a sorted array using binary search
#include <iostream>
using namespace std;    
int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // To avoid overflow

        if (arr[mid] == target) {
            return mid; // Return the index of the target element
        } else if (arr[mid] < target) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }   
    }
    return -1; // Return -1 if the target is not found
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl; // Print the index
    } else {                
        cout << "Element not found in the array." << endl; // Print not found message
    }
    return 0; // Return 0 to indicate successful execution
}
