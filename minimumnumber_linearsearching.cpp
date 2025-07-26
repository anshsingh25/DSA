//finding the minimum number in array
#include<iostream>
using namespace std;
int minimumnumber(int arr[],int target){
    for(int i=1; i<=sizeof(arr); i++){
        if(arr[i] < target){
            target = arr[i];
            return target;
        }
    }
    return -1;
} 

int main(){
    int arr[] = {10,-4,9,3,-2,8,1};
    int target = arr[0];
    cout << minimumnumber(arr,target);

    return 0;
}