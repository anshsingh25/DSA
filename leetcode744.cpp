// Find Smallest Letter Greater Than Target
#include<iostream>
#include<vector>
using namespace std;
char nextGreatestLetter(vector<char>& letters, char target) {
    int start = 0;
    int end = letters.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(letters[mid] <= target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return letters[start % letters.size()];
    }

int main(){
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'h';
    cout << nextGreatestLetter(letters, target);
}