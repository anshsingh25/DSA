#include<iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    cout << "enter number :";
    cin >> number;
    for(int i=0; i<=number ; i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout << sum << " ";
    return 0;
}