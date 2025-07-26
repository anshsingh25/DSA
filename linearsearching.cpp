// array is given for linear searching find the element and return its index
#include <iostream>
using namespace std;        
int linearSearch(int arr[], int target) {

    if (target < 0) {
        return -1; // Return -1 if the key is negative
    }
  

    for (int i = 0; i <= sizeof(arr); i++) {
        if (arr[i] == target) {
            // Return the index if the key is found
            cout<< "Element found at index: " << i << endl; // Print the index of the found element
        }
    }
    return -1; // Return -1 if the key is not found
}
int main(){
   int arr[]={10,-5,22,9,-6,66}; // Declare an array to hold the elements
   int target = 9; // Declare a variable to hold the target element
   cout << linearSearch(arr, target); // Call the linear search function

}