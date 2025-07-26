//selection sort
#include<iostream>
#include<vector>
using namespace std;

int selectionSort(vector<int>& arr){
    int n = arr.size() ;
    for(int row = 0; row < n - 1; row++){
        bool swapped = false;
        int minvalue = row;
        for(int column = 0 ; column < n - row - 1; column++){
            if(arr[column] > minvalue){
                minvalue = arr[column];
                swap(arr[column], arr[minvalue]);
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    vector<int> arr = {3,5,4,2,1};
    cout << selectionSort(arr);
    for(int num : arr){
        cout << num;
    }
} 