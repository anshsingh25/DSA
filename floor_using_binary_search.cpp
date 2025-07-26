//floor using binary search
#include <iostream>
using namespace std;
int floorNumber(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        int mid = start + (end - start) / 2;
         if(arr[mid] == target){
            return arr[mid];
        }else if(arr[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return arr[end];
}
int main(){
    int arr[] = {1,2,3,4,6,7,8,9};
     int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 5;
    cout << floorNumber(arr, size, target);
}