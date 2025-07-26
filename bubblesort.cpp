//bubble sort
#include<iostream>
#include<vector>
using namespace std;

int bubbleSort(vector<int>& arr){
    int n = arr.size() ;
    for(int row = 0; row < n - 1; row++){
        bool swapped = false;
        for(int column = 0 ; column < n - row - 1; column++){
            if(arr[column] > arr[column + 1]){
                int temp = arr[column];
                arr[column] = arr[column + 1];
                arr[column + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int> arr = {3,5,4,2,1};
    cout << bubbleSort(arr);
    for(int num : arr){
        cout << num;
    }
} 