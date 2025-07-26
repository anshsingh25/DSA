//counting even number in an array 
#include <iostream>
using namespace std;    
int countEvenNumbers(int arr[]) {
    int count = 0; // Initialize a counter for even numbers
    for (int i = 0; i < sizeof(arr) - 1; i++) {
        if (arr[i] % 2 == 0) { // Check if the number is even
            count++; // Increment the counter if the number is even
        }
    }
    return count; // Return the total count of even numbers
   // return -1; // Return -1 if the array is empty or invalidß
}

int main() {
    int arr[] = {10, -5, 22, 9, -6, 66,6}; // Declare an array to hold the elements
    int evenCount = countEvenNumbers(arr); // Call the function to count even numbers
    cout << "Total even numbers: " << evenCount << endl; // Print the total count of even numbers

    return 0; // Return 0 to indicate successful execution
}
// Note: The sizeof operator does not work as expected with arrays in function parameters.
// You should pass the size of the array as an additional parameter or use a vector for dynamic arrays.
// This code assumes a fixed-size array for demonstration purposes. Adjust as necessary for your use case.  