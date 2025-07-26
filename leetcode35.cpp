// returning the index of element from an array if their no element found then return the index where it should be stored 
#include<iostream>
#include<vector>
using namespace std;    
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return start;
        return end;
    }

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 7;
    cout << searchInsert(nums, target);
}