#include<iostream>
using namespace std; 
int main(){
    int number;
    string output;
    cout << "enter a number:";
    cin >> number;
    for(int i=2; i<=(number-1); i++){
        if(number%i == 0){
            output = "non-prime";
            break;
        }else{
            output = "prime";
            break;
        }
    }
    cout << output << endl;
    return 0;
}