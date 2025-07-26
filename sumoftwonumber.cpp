#include<iostream>
using namespace std;
int sumofIndex(int arr[], int target){
    for(int i=0; i<= sizeof(arr) - 1; i++){
        for(int j=i+1; j<= sizeof(arr) - 1; j++){
                if(arr[i] + arr[j] == target){
                 cout << i << j << endl; // Print the indices of the elements that sum to the target
                    return 0; // Return 0 to indicate successful execution
            }
        }
    }
}

int main(){
    int arr[] = {1,5,3,8,7,9};
    int target = 11;
    sumofIndex(arr,target);
}       