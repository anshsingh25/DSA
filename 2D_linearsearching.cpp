//search an element in a 2D array using linear search 
#include <iostream>
using namespace std;    
int linearSearch2D(int arr[][3], int rows, int cols, int target) {
    for (rows = 0; rows < sizeof(arr); rows++) {
        for (cols = 0; cols < sizeof(arr[rows]); cols++) {
            if (arr[rows][cols] == target) {
                cout << "Element found at index: (" << rows << ", " << cols << ")" << endl; // Print the index of the found element
                return 1; // Return 1 if the key is found
            }
        }
    }
    return -1; // Return -1 if the key is not found
}
int main() {
    int arr[3][3] = {{10, -5, 22}, {9, -6, 66}, {3, 4, 5}}; // Declare a 2D array to hold the elements
    int target = 9; // Declare a variable to hold the target element
    int rows = 3; // Number of rows in the array
    int cols = 3; // Number of columns in the array

     int result = linearSearch2D(arr, rows, cols, target); // Call the linear search function
    cout<< result; // Print the result of the search
     if (result == -1) {
        cout << "Element not found" << endl; // Print if the element is not found
    }
    return 0; // Return 0 to indicate successful execution
}

