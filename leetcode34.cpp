//Find First and Last Position of Element in Sorted Array
#include<iostream>
#include<vector>
using namespace std;
    
    int firstSearch(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int n = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                n = mid;
                end = mid - 1;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return n;
    }

    int lastSearch(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int n = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                n = mid;
                start = mid + 1;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return n;
    }

 vector<int> searchRange(vector<int>& nums, int target) {
           vector<int> arr(2);
           arr[0] = firstSearch(nums, target);
           arr[1] =  lastSearch(nums, target);
           return arr;
    }


    int main(){
        vector<int> nums = {5, 7, 7, 8, 8, 9};
        int target = 7;
        vector<int> result = searchRange(nums,target);
        cout << "[" << result[0] << "," << result[1] << "]" << endl;
        
    }