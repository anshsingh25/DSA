#include<iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    cout << "enter number :";
    cin >> number;
    for(int i=0; i<number; i++){
        sum+=i;
    }
    cout << sum << endl;
    return 0;
}